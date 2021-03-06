﻿/**
* Copyright (c) - placeholder
*
*/

#include "HansoftSVNPusher.h"

#ifdef _MSC_VER
#include <tchar.h>
#include <conio.h>
#include <windows.h>
#else
#ifdef __GNUC__
#ifdef __linux__
#include <linux/limits.h>
#include <stdlib.h>
#include <typeinfo>
#endif
#include <unistd.h>
#endif
#endif
#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <sstream>

#include <HPMSdkCpp.h>

using namespace HPMSdk;

void HansoftSVNPusher::On_ProcessError(EHPMError _Error)
{
	HPMString SdkError = HPMSdkSession::ErrorToStr(_Error);
	STD_STRING Error(SdkError.begin(), SdkError.end());

	STD_COUT << "On_ProcessError: " << Error << "\r\n";

}

HansoftSVNPusher::HansoftSVNPusher() {
	m_pSession = NULL;
}

HansoftSVNPusher::~HansoftSVNPusher() {
	if (m_pSession) {
		DestroyConnection();
	}
}

#ifdef _MSC_VER
template <typename t_CData1, typename t_CData2, typename t_CData3>
t_CData1 *StrReplaceChar(t_CData1 *_pStr1, t_CData2 _CharFind, t_CData3 _CharReplace)
{
	t_CData1 *pStr1 = _pStr1;

	while (*pStr1)
	{
		if (sizeof(t_CData1) > sizeof(t_CData2))
		{
			if (*pStr1 - _CharFind == 0)
				*pStr1 = _CharReplace;
		}
		else
		{
			if (_CharFind - *pStr1 == 0)
				*pStr1 = _CharReplace;
		}

		++pStr1;
	}
	return _pStr1;
}


STD_STRING GetProgramPath()
{
	STD_STRING CommandLine;

	int nArgs = 0;

	LPWSTR* pArgs = CommandLineToArgvW(GetCommandLineW(), &nArgs);
	if (pArgs)
	{
		CommandLine = *pArgs;
		GlobalFree(pArgs);

		STD_STRING FullFileName;
		wchar_t *pFileName;
		wchar_t Temp;
		unsigned int nNeeded = GetFullPathNameW(CommandLine.c_str(), 0, &Temp, &pFileName);

		if (nNeeded == 0)
			throw HPMSdkCppException("Windows returned an error from GetFullPathName");

		wchar_t *pTemp = new wchar_t[nNeeded + 1];
		if (!GetFullPathNameW(CommandLine.c_str(), nNeeded, pTemp, &pFileName))
			throw HPMSdkCppException("Windows returned an error from GetFullPathName");
		StrReplaceChar(pTemp, '\\', '/');
		FullFileName = pTemp;
		delete[] pTemp;

		CommandLine = FullFileName;
	}

	return CommandLine;
}

STD_STRING GetProgramDirectory()
{
	STD_STRING Ret;
	Ret = GetProgramPath();
	size_t iFind = Ret.find_last_of('/');

	if (iFind >= 0)
	{
		Ret.erase(iFind);
	}
	return Ret;
}
#elif __GNUC__
STD_STRING GetProgramDirectory()
{
	char TmpBuf[PATH_MAX];
	std::string CurrentDirectory = std::string(getcwd(TmpBuf, sizeof(TmpBuf)));
	return CurrentDirectory;
}
#endif


bool HansoftSVNPusher::InitConnection() {
	if (m_pSession) {
		return true;
	}

	EHPMSdkDebugMode DebugMode = EHPMSdkDebugMode_Debug;
#ifdef _DEBUG
	DebugMode = EHPMSdkDebugMode_Debug; // Set debug flag so we will get memory leak info.
#endif

	try
	{
		m_pSession = HPMSdkSession::SessionOpen(
			server,
			port,
			database,
			sdkuser,
			sdkpassword,
			this,
			NULL,
			true,
			DebugMode,
			NULL,
			0,
			hpm_str(""),
			HPMSystemString(),
			NULL); //&m_ProcessCallbackInfo
	}
	catch (const HPMSdkException &_Error)
	{
		HPMString SdkError = _Error.GetAsString();
		STD_STRING Error(SdkError.begin(), SdkError.end());
		STD_COUT << hpm_str("SessionOpen failed with error:") << Error << hpm_str("\r\n");
		return false;

	}
	catch (const HPMSdkCppException &_Error)
	{
		STD_COUT << hpm_str("SessionOpen failed with error:") << _Error.what() << "\r\n";
		return false;
	}

	STD_COUT << "Successfully opened session.\r\n";

#ifdef _HANSOFT_SDK_VERSION_7
    m_pSession->VersionControlInit(hpm_str("./LocalFiles"));
#else
    m_pSession->VersionControlInit(hpm_str("./LocalFiles"), false);
#endif

	return true;
}

void HansoftSVNPusher::DestroyConnection() {
	if (m_pSession) {
		HPMSdkSession::SessionDestroy(m_pSession);
		m_pSession = NULL;
	}
}

void HansoftSVNPusher::DeleteVersionControlFile(HPMSdk::HPMString _File) {
	HPMVersionControlDeleteFiles ToDelete;
	HPMVersionControlFileSpec Spec;
	Spec.m_Path = _File;
	ToDelete.m_Files.push_back(Spec);
	ToDelete.m_bDeleteLocally = false;
	ToDelete.m_bPermanent = true;
	ToDelete.m_Comment = hpm_str("Client SVN plugin automatic deletion");
	HPMChangeCallbackData_VersionControlDeleteFilesResponse Response =
		m_pSession->VersionControlDeleteFilesBlock(ToDelete);
	if (Response.m_Errors.size()) {
		STD_COUT << "Attempt to delete previous plugin: '"
			<< Response.m_Errors[0].m_File.c_str() << "' : '"
			<< m_pSession->VersionControlErrorToStr(
			Response.m_Errors[0].m_Error).c_str() << "'\r\n";
	} else {
		STD_COUT << "Successfully deleted previous Hansoft/SVN plugin version"
			<< std::endl;
	}
}

void HansoftSVNPusher::AddVersionControlFile(HPMString _File, HPMString _FileLocal) {
    HPMVersionControlAddFiles ToAdd;

    HPMVersionControlLocalFilePair File;
    File.m_LocalPath = _FileLocal;
    File.m_FileSpec.m_Path = _File;
    ToAdd.m_FilesToAdd.push_back(File);
    ToAdd.m_Comment = hpm_str("Client SVN plugin automatic add");
    ToAdd.m_bDeleteSourceFiles = false;

    HPMChangeCallbackData_VersionControlAddFilesResponse Response =
            m_pSession->VersionControlAddFilesBlock(ToAdd);
    if (Response.m_Errors.size())
    {
        STD_COUT << "Error uploading the Hansoft/SVN plugin: "
                << _FileLocal << "\n"
                << "Reason: "
                //<< Response.m_Errors[0].m_File.c_str() << "' Error: '"
                << m_pSession->VersionControlErrorToStr(
                        Response.m_Errors[0].m_Error).c_str() << std::endl;;
    } else {
        STD_COUT << "Successfully uploaded the Hansoft/SVN plugin:"
                << _FileLocal
                << std::endl;
    }
}

void HansoftSVNPusher::DoAddVersionControlFile(HPMString path, HPMString lib) {
	AddVersionControlFile(path, GetProgramDirectory() + lib);
}


void HansoftSVNPusher::UpdateServer(bool updateAllPlatforms, bool onlyDelete) {
	// Delete old files
	DeleteVersionControlFile(hpm_str("SDK/Plugins/se.findout.hansoft.svn.clientplugin"));

	if (onlyDelete) {
		return;
	}

	// TODO:
	// Add plugins. You need a Win32 x86 and x64, OS X 10.7 x64 and 10.5 x86
	// and x64 and Linux x64 and x86 versions built when you run the program.
	// Both are required. If you create your own application make sure to use
	// a directory for a reverse domain name that you own.
	// Remove ifdefs and comments in real deployer
	//
	// HansoftSVN - we will initially support:
	// Windows x86
	// OSX10.7 x64
	// Linux x86

	HPMString win32_x86_path;
	HPMString win32_x64_path;
	HPMString osx_x64_path;
	HPMString linux_x64_path;

	win32_x86_path = hpm_str("SDK/Plugins/se.findout.hansoft.svn.clientplugin/Win32/x86/Plugin.dll");
	win32_x64_path = hpm_str("SDK/Plugins/se.findout.hansoft.svn.clientplugin/Win32/x64/Plugin.dll");
	osx_x64_path = hpm_str("SDK/Plugins/se.findout.hansoft.svn.clientplugin/OSX10.7/x64/Plugin.dylib");
	linux_x64_path = hpm_str("SDK/Plugins/se.findout.hansoft.svn.clientplugin/Linux2.6/x64/Plugin.so");
	if (updateAllPlatforms) {
		DoAddVersionControlFile(win32_x86_path, hpm_str("/Plugin.x86.dll"));
		DoAddVersionControlFile(win32_x64_path, hpm_str("/Plugin.x64.dll"));
		DoAddVersionControlFile(osx_x64_path, hpm_str("/Plugin.dylib"));
		DoAddVersionControlFile(linux_x64_path, hpm_str("/Plugin.so"));
	}
	else {
#ifdef _MSC_VER
		DoAddVersionControlFile(win32_x86_path, hpm_str("/Plugin.x86.dll"));
		DoAddVersionControlFile(win32_x64_path, hpm_str("/Plugin.x64.dll"));
#elif defined(__APPLE__)
		DoAddVersionControlFile(osx_x64_path, "/Plugin.dylib");
#elif defined(__linux__)
		DoAddVersionControlFile(linux_x64_path, "/Plugin.so");
#else
#error "Unknown platform"
#endif
	}
}

void HansoftSVNPusher::Update(bool updateAllPlatforms, bool onlyDelete) {
	if (InitConnection()) {
		try {
			UpdateServer(updateAllPlatforms, onlyDelete);
		}
		catch (HPMSdkException &_Error) {
			HPMString SdkError = _Error.GetAsString();
			STD_STRING Error(SdkError.begin(), SdkError.end());
			STD_COUT << hpm_str("Exception in processing loop: ") << Error
				<< hpm_str("\r\n");
		}
		catch (HPMSdkCppException _Error) {
			STD_COUT << hpm_str("Exception in processing loop: ")
				<< _Error.what() << hpm_str("\r\n");
		}
	}
}


int HansoftSVNPusher::Run(bool updateAllPlatforms, bool onlyDelete) {
	// Initialize the SDK
	Update(updateAllPlatforms, onlyDelete);
	DestroyConnection();

	return 0;
}

void exitWithError(const STD_STRING &error)
{
	STD_COUT << error;
	std::cin.ignore();
	std::cin.get();
	STD_COUT << "Exiting parser with error: " << error << std::endl;
	exit(EXIT_FAILURE);
}


class Convert
{
public:
	template <typename T>
	static STD_STRING T_to_string(T const &val)
	{
		STD_STRINGSTREAM ostr;
		ostr << val;

		return ostr.str();
	}

	template <typename T>
	static T string_to_T(STD_STRING const &val)
	{
		STD_ISTRINGSTREAM istr(val);
		T returnVal;
		if (!(istr >> returnVal))
#ifdef _MSC_VER
			//exitWithError(L"CFG: Not a valid " + typeid(T).name() + L" received!\n");
			exitWithError(L"CFG: Not a valid <type name should go here> received!\n");
#else
			//exitWithError("CFG: Not a valid " + typeid(T).name() + " received!\n");
			exitWithError("CFG: Not a valid <type name should go here> received!\n");
#endif
		return returnVal;
	}

};

#ifdef _MSC_VER
const wchar_t* bst = L"\t";
const wchar_t* bsn = L"\n";
#else
const char* bst = "\t";
const char* bsn = "\n";
#endif


class ConfigFile
{
private:
	std::map<STD_STRING, STD_STRING> contents;
	STD_STRING fName;

	void removeComment(STD_STRING &line) const
	{

		if (line.find('#') != line.npos)
			line.erase(line.find('#'));
	}

	bool onlyWhitespace(const STD_STRING &line) const
	{
		return (line.find_first_not_of(' ') == line.npos);
	}
	bool validLine(const STD_STRING &line) const
	{
		STD_STRING temp = line;
#ifdef _MSC_VER
		temp.erase(0, temp.find_first_not_of(L"\t "));
#else
		temp.erase(0, temp.find_first_not_of("\t "));
#endif
		if (temp[0] == '=')
			return false;

		for (size_t i = temp.find('=') + 1; i < temp.length(); i++)
		if (temp[i] != ' ')
			return true;

		return false;
	}

	void extractKey(STD_STRING &key, size_t const &sepPos, const STD_STRING &line) const
	{
		key = line.substr(0, sepPos);
		if (key.find('\t') != line.npos || key.find(' ') != line.npos)
#ifdef _MSC_VER
			key.erase(key.find_first_of(L"\t "));
#else
			key.erase(key.find_first_of("\t "));
#endif
	}
	void extractValue(STD_STRING &value, size_t const &sepPos, const STD_STRING &line) const
	{
		value = line.substr(sepPos + 1);
#ifdef _MSC_VER
		value.erase(0, value.find_first_not_of(L"\t "));
		value.erase(value.find_last_not_of(L"\t ") + 1);
#else
		value.erase(0, value.find_first_not_of("\t "));
		value.erase(value.find_last_not_of("\t ") + 1);
#endif
	}

	void extractContents(const STD_STRING &line)
	{
		STD_STRING temp = line;
#ifdef _MSC_VER
		temp.erase(0, temp.find_first_not_of(L"\t "));
#else
		temp.erase(0, temp.find_first_not_of("\t "));
#endif
		size_t sepPos = temp.find('=');

		STD_STRING key, value;
		extractKey(key, sepPos, temp);
		extractValue(value, sepPos, temp);

		if (!keyExists(key))
			contents.insert(std::pair<STD_STRING, STD_STRING>(key, value));
		else
#ifdef _MSC_VER
			exitWithError(L"CFG: Can only have unique key names!\n");
#else
			exitWithError("CFG: Can only have unique key names!\n");
#endif
	}

	void parseLine(const STD_STRING &line, size_t const lineNo)
	{
		if (line.find('=') == line.npos)
#ifdef _MSC_VER
			exitWithError(L"CFG: Couldn't find separator on line: " + Convert::T_to_string(lineNo) + L'\n');
#else
			exitWithError("CFG: Couldn't find separator on line: " + Convert::T_to_string(lineNo) + '\n');
#endif
		if (!validLine(line))
#ifdef _MSC_VER
			exitWithError(L"CFG: Bad format for line: " + Convert::T_to_string(lineNo) + L'\n');
#else
			exitWithError("CFG: Bad format for line: " + Convert::T_to_string(lineNo) + '\n');
#endif
		extractContents(line);
	}

	void ExtractKeys()
	{
		STD_IFSTREAM file;
		file.open(fName.c_str());
		if (!file)
#ifdef _MSC_VER
			exitWithError(L"CFG: File " + fName + L" couldn't be found!\n");
#else
			exitWithError("CFG: File " + fName + " couldn't be found!\n");
#endif
		STD_STRING line;
		size_t lineNo = 0;
		while (std::getline(file, line))
		{
			lineNo++;
			STD_STRING temp = line;

			if (temp.empty())
				continue;

			removeComment(temp);

			if (onlyWhitespace(temp))
				continue;

			parseLine(temp, lineNo);
		}

		file.close();
	}
public:
	ConfigFile(const STD_STRING &fName)
	{
		this->fName = fName;
		ExtractKeys();
	}

	bool keyExists(const STD_STRING &key) const
	{
		return contents.find(key) != contents.end();
	}

	template <typename ValueType>
	ValueType getValueOfKey(const STD_STRING &key, ValueType const &defaultValue = ValueType()) const
	{
		if (!keyExists(key))
			return defaultValue;

		return Convert::string_to_T<ValueType>(contents.find(key)->second);
	}
};

void replaceAll(STD_STRING& str, const STD_STRING& from, const STD_STRING& to) {
	if (from.empty())
		return;
	size_t start_pos = 0;
	while ((start_pos = str.find(from, start_pos)) != STD_STRING::npos) {
		str.replace(start_pos, from.length(), to);
		start_pos += to.length(); // In case 'to' contains 'from', like replacing 'x' with 'yx'
	}
}

#ifdef _MSC_VER
int _tmain(int argc, _TCHAR* argv[])
#else
int main(int argc, const char * argv[])
#endif
{
    STD_COUT << "Hit enter to start upload:";
    int c = getchar();
	HansoftSVNPusher pusher;

	STD_STRING serverValue;
	int portValue;
	STD_STRING databaseValue;
	STD_STRING sdkUsernameValue;
	STD_STRING sdkPasswordValue;
	bool updateAll = false;
	bool onlyDelete = false;
	if (argc > 1) {
		std::vector<STD_STRING> params(argv, argv + argc);
		// parse command line arguments
		for (int i = 1; i < argc; i++) {
#ifdef _MSC_VER
			STD_STRING flagprefix = L"-";
			STD_STRING optionA = L"a";
			STD_STRING optionD = L"d";
#else
			STD_STRING flagprefix = "-";
			STD_STRING optionA = "a";
			STD_STRING optionD = "d";
#endif
			STD_STRING arg = params.at(i);
			if (arg.compare(0, flagprefix.length(), flagprefix) == 0) {
				// parse flags
				if (arg.compare(flagprefix.length(), flagprefix.length() + 1, optionA) == 0) {
					updateAll = true;
				} else if (arg.compare(flagprefix.length(), flagprefix.length() + 1, optionD) == 0) {
					onlyDelete = true;
				}
			}
		}
	}
#ifdef _MSC_VER
	STD_STRING pluginPropertiesStr = L"plugin.properties";
	STD_STRING encodedSpaceStr = L"%20";
	STD_STRING spaceStr = L" ";
	STD_STRING serverStr = L"server";
	STD_STRING defaultServerStr = L"localhost";
	STD_STRING portStr = L"port";
	STD_STRING databaseStr = L"database";
	STD_STRING defaultDatabaseStr = L"Company project";
	STD_STRING sdkuserStr = L"sdkuser";
	STD_STRING defaultSdkuserStr = L"SDK";
	STD_STRING sdkpasswordStr = L"sdkpassword";
	STD_STRING defaultSdkpasswordStr = L"SDK";
#else
	STD_STRING pluginPropertiesStr = "plugin.properties";
	STD_STRING encodedSpaceStr = "%20";
	STD_STRING spaceStr = " ";
	STD_STRING serverStr = "server";
	STD_STRING defaultServerStr = "localhost";
	STD_STRING portStr = "port";
	STD_STRING databaseStr = "database";
	STD_STRING defaultDatabaseStr = "Company project";
	STD_STRING sdkuserStr = "sdkuser";
	STD_STRING defaultSdkuserStr = "SDK";
	STD_STRING sdkpasswordStr = "sdkpassword";
	STD_STRING defaultSdkpasswordStr = "SDK";
#endif
	// check if there's a properties file
	const char *props = "plugin.properties";
	std::ifstream ifile;
	ifile.open(props, std::ifstream::in);
	if (ifile) {
		// exists
		ConfigFile cfg(pluginPropertiesStr);
		serverValue =
			cfg.getValueOfKey<STD_STRING>(serverStr, defaultServerStr);
		portValue =
			cfg.getValueOfKey<int>(portStr, 50256);
		databaseValue =
			cfg.getValueOfKey<STD_STRING>(databaseStr, defaultDatabaseStr);
		replaceAll(databaseValue, encodedSpaceStr, spaceStr);
		sdkUsernameValue =
			cfg.getValueOfKey<STD_STRING>(sdkuserStr, defaultSdkuserStr);
		sdkPasswordValue =
			cfg.getValueOfKey<STD_STRING>(sdkpasswordStr, defaultSdkpasswordStr);
		pusher.server = (const HS_CHAR *)serverValue.c_str();;
		pusher.port = portValue;
		pusher.database = (const HS_CHAR *)databaseValue.c_str();
		pusher.sdkuser = (const HS_CHAR *)sdkUsernameValue.c_str();
		pusher.sdkpassword = (const HS_CHAR *)sdkPasswordValue.c_str();
	} else {
		std::cerr << "No 'plugin.properties' file - exiting" << std::endl;
		exit(1);
	}
	STD_COUT << "Server:       " << pusher.server << std::endl;
	STD_COUT << "Port:         " << pusher.port << std::endl;
	STD_COUT << "Database:     " << pusher.database << std::endl;
	STD_COUT << "SDK Username: " << pusher.sdkuser << std::endl;
	STD_COUT << "SDK Password: " << "*** ;-)" << std::endl;
	return pusher.Run(updateAll, onlyDelete);
}
