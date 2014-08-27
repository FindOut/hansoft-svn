/**
* Copyright (c) - placeholder
*
*/

#ifdef _MSC_VER
#include <tchar.h>
#include <conio.h>
#include <windows.h>
#else
#ifdef __GNUC__
#ifdef __linux__
#include <linux/limits.h>
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

//#include "PropertiesUtil.h"

using namespace std;
using namespace HPMSdk;


class HansoftSVNPusher : public HPMSdkCallbacks
{
public:
	HPMSdkSession *m_pSession;
	const char *server;
	const char *database;
	int port;
	const char *sdkuser;
	const char *sdkpassword;

	virtual void On_ProcessError(EHPMError _Error)
	{
		HPMString SdkError = HPMSdkSession::ErrorToStr(_Error);
		wstring Error(SdkError.begin(), SdkError.end());

		wcout << "On_ProcessError: " << Error << "\r\n";

	}

	HansoftSVNPusher()
	{
		m_pSession = NULL;
	}

	~HansoftSVNPusher()
	{
		if (m_pSession)
		{
			DestroyConnection();
		}
	}

#ifdef _MSC_VER
	wstring GetProgramPath()
	{
		wstring CommandLine;

		int nArgs = 0;

		LPWSTR* pArgs = CommandLineToArgvW(GetCommandLineW(), &nArgs);
		if (pArgs)
		{
			CommandLine = *pArgs;
			GlobalFree(pArgs);

			wstring FullFileName;
			wchar_t *pFileName;
			wchar_t Temp;
			unsigned int nNeeded = GetFullPathNameW(CommandLine.c_str(), 0, &Temp, &pFileName);

			if (nNeeded == 0)
				throw HPMSdkCppException("Windows returned an error from GetFullPathName");

			wchar_t *pTemp = new wchar_t[nNeeded + 1];
			if (!GetFullPathNameW(CommandLine.c_str(), nNeeded,  pTemp, &pFileName))
				throw HPMSdkCppException("Windows returned an error from GetFullPathName");
			StrReplaceChar(pTemp, '\\', '/');
			FullFileName = pTemp;
			delete [] pTemp;

			CommandLine = FullFileName;
		}

		return CommandLine;
	}

	wstring GetProgramDirectory()
	{
		wstring Ret;
		Ret = GetProgramPath();
		size_t iFind = Ret.find_last_of('/');

		if (iFind >= 0)
		{
			Ret.erase(iFind);
		}
		return Ret;
	}
#elif __GNUC__
	string GetProgramDirectory()
	{
		char TmpBuf[PATH_MAX];
		string CurrentDirectory = string(getcwd(TmpBuf, sizeof(TmpBuf)));
		return CurrentDirectory;
	}
#endif


	bool InitConnection()
	{
		if (m_pSession)
			return true;

		EHPMSdkDebugMode DebugMode = EHPMSdkDebugMode_Debug;
#ifdef _DEBUG
		DebugMode = EHPMSdkDebugMode_Debug; // Set debug flag so we will get memory leak info.
#endif

		try
		{
			m_pSession = HPMSdkSession::SessionOpen(
			        hpm_str(server),
			        port,
			        hpm_str(database),
			        hpm_str(sdkuser),
			        hpm_str(sdkpassword),
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
			wstring Error(SdkError.begin(), SdkError.end());
			wcout << hpm_str("SessionOpen failed with error:") << Error << hpm_str("\r\n");
			return false;

		}
		catch (const HPMSdkCppException &_Error)
		{
			wcout << hpm_str("SessionOpen failed with error:") << _Error.what() << "\r\n";
			return false;
		}

		wcout << "Successfully opened session.\r\n";

		m_pSession->VersionControlInit(hpm_str("./LocalFiles"));

		return true;
	}

	void DestroyConnection()
	{
		if (m_pSession)
		{
			HPMSdkSession::SessionDestroy(m_pSession);
			m_pSession = NULL;
		}
	}

	void DeleteVersionControlFile(HPMString _File)
	{
		HPMVersionControlDeleteFiles ToDelete;
		HPMVersionControlFileSpec Spec;
		Spec.m_Path = _File;
		ToDelete.m_Files.push_back(Spec);
		ToDelete.m_bDeleteLocally = false;
		ToDelete.m_bPermanent = true;
		ToDelete.m_Comment = hpm_str("Client SVN plugin automatic deletion");
		HPMChangeCallbackData_VersionControlDeleteFilesResponse Response = m_pSession->VersionControlDeleteFilesBlock(ToDelete);
		if (Response.m_Errors.size())
		{
			wcout << "Error deleting version control file: '" << Response.m_Errors[0].m_File.c_str() << "' Error: '" << m_pSession->VersionControlErrorToStr(Response.m_Errors[0].m_Error).c_str() << "'\r\n";
		}
	}

	void AddVersionControlFile(HPMString _File, HPMString _FileLocal)
	{
		HPMVersionControlAddFiles ToAdd;

		HPMVersionControlLocalFilePair File;
		File.m_LocalPath = _FileLocal;
		File.m_FileSpec.m_Path = _File;
		ToAdd.m_FilesToAdd.push_back(File);
		ToAdd.m_Comment = hpm_str("Client SVN plugin automatic add");
		ToAdd.m_bDeleteSourceFiles = false;

		HPMChangeCallbackData_VersionControlAddFilesResponse Response = m_pSession->VersionControlAddFilesBlock(ToAdd);
		if (Response.m_Errors.size())
		{
			wcout << "Error adding version control file: '" << Response.m_Errors[0].m_File.c_str() << "' Error: '" << m_pSession->VersionControlErrorToStr(Response.m_Errors[0].m_Error).c_str() << "'\r\n";
		}
	}

	void UpdateServer(bool updateAllPlatforms, bool onlyDelete)
	{
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
            DoAddVersionControlFile(win32_x86_path, "/Plugin.dll");
            DoAddVersionControlFile(win32_x64_path, "/Plugin.dll");
            DoAddVersionControlFile(osx_x64_path, "/Plugin.dylib");
            DoAddVersionControlFile(linux_x64_path, "/Plugin.so");
        } else {
#ifdef _MSC_VER
            DoAddVersionControlFile(win32_x86_path, "/Plugin.dll");
            DoAddVersionControlFile(win32_x64_path, "/Plugin.dll");
//		AddVersionControlFile(
//		        win32_x86_path,
//		        GetProgramDirectory() + hpm_str("/Plugin.dll"));
//		AddVersionControlFile(
//		        win32_x64win32_x64_path,
//		        GetProgramDirectory() + hpm_str("/Plugin.dll"));
#elif defined(__APPLE__)
            DoAddVersionControlFile(osx_x64_path, "/Plugin.dylib");
//		AddVersionControlFile(
//		        osx_x64_path,
//		        GetProgramDirectory() + hpm_str("/Plugin.dylib"));
#elif defined(__linux__)
//            DoAddVersionControlFile(linux_x64_path, "/Plugin.so");
//		AddVersionControlFile(
//		        linlinux_x64_path,
//		        GetProgramDirectory() + hpm_str("/Plugin.so"));
#else
#error "Unknown platform"
#endif
        }
	}

	void DoAddVersionControlFile(HPMString path, HPMString lib) {
	    AddVersionControlFile(path, GetProgramDirectory() + lib);
	}

	void Update(bool updateAllPlatforms, bool onlyDelete)
	{
		if (InitConnection())
		{
			try
			{
				UpdateServer(updateAllPlatforms, onlyDelete);
			}
			catch (HPMSdkException &_Error)
			{
				HPMString SdkError = _Error.GetAsString();
				wstring Error(SdkError.begin(), SdkError.end());
				wcout << hpm_str("Exception in processing loop: ") << Error << hpm_str("\r\n");
			}
			catch (HPMSdkCppException _Error)
			{
				wcout << hpm_str("Exception in processing loop: ") << _Error.what() << hpm_str("\r\n");
			}
		}
	}


	int Run(bool updateAllPlatforms, bool onlyDelete)
	{
		// Initialize the SDK
		Update(updateAllPlatforms, onlyDelete);
		DestroyConnection();

		return 0;
	}
};

void exitWithError(const std::string &error)
{
    std::cout << error;
    std::cin.ignore();
    std::cin.get();
	std::cout << "Exiting parser with error: " << error << std::endl;
    exit(EXIT_FAILURE);
}


class Convert
{
public:
    template <typename T>
    static std::string T_to_string(T const &val)
    {
        std::ostringstream ostr;
        ostr << val;

        return ostr.str();
    }

    template <typename T>
    static T string_to_T(std::string const &val)
    {
        std::istringstream istr(val);
        T returnVal;
        if (!(istr >> returnVal))
            exitWithError("CFG: Not a valid " + (std::string)typeid(T).name() + " received!\n");

        return returnVal;
    }

};

class ConfigFile
{
private:
    std::map<std::string, std::string> contents;
    std::string fName;

    void removeComment(std::string &line) const
    {

        if (line.find('#') != line.npos)
            line.erase(line.find('#'));
    }

    bool onlyWhitespace(const std::string &line) const
    {
        return (line.find_first_not_of(' ') == line.npos);
    }
    bool validLine(const std::string &line) const
    {
        std::string temp = line;
        temp.erase(0, temp.find_first_not_of("\t "));
        if (temp[0] == '=')
            return false;

        for (size_t i = temp.find('=') + 1; i < temp.length(); i++)
            if (temp[i] != ' ')
                return true;

        return false;
    }

    void extractKey(std::string &key, size_t const &sepPos, const std::string &line) const
    {
        key = line.substr(0, sepPos);
        if (key.find('\t') != line.npos || key.find(' ') != line.npos)
            key.erase(key.find_first_of("\t "));
    }
    void extractValue(std::string &value, size_t const &sepPos, const std::string &line) const
    {
        value = line.substr(sepPos + 1);
        value.erase(0, value.find_first_not_of("\t "));
        value.erase(value.find_last_not_of("\t ") + 1);
    }

    void extractContents(const std::string &line)
    {
        std::string temp = line;
        temp.erase(0, temp.find_first_not_of("\t "));
        size_t sepPos = temp.find('=');

        std::string key, value;
        extractKey(key, sepPos, temp);
        extractValue(value, sepPos, temp);

        if (!keyExists(key))
            contents.insert(std::pair<std::string, std::string>(key, value));
        else
            exitWithError("CFG: Can only have unique key names!\n");
    }

    void parseLine(const std::string &line, size_t const lineNo)
    {
        if (line.find('=') == line.npos)
            exitWithError("CFG: Couldn't find separator on line: " + Convert::T_to_string(lineNo) + "\n");

        if (!validLine(line))
            exitWithError("CFG: Bad format for line: " + Convert::T_to_string(lineNo) + "\n");

        extractContents(line);
    }

    void ExtractKeys()
    {
        std::ifstream file;
        file.open(fName.c_str());
        if (!file)
            exitWithError("CFG: File " + fName + " couldn't be found!\n");

        std::string line;
        size_t lineNo = 0;
        while (std::getline(file, line))
        {
            lineNo++;
            std::string temp = line;

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
    ConfigFile(const std::string &fName)
    {
        this->fName = fName;
        ExtractKeys();
    }

    bool keyExists(const std::string &key) const
    {
        return contents.find(key) != contents.end();
    }

    template <typename ValueType>
    ValueType getValueOfKey(const std::string &key, ValueType const &defaultValue = ValueType()) const
    {
        if (!keyExists(key))
            return defaultValue;

        return Convert::string_to_T<ValueType>(contents.find(key)->second);
    }
};

void replaceAll(std::string& str, const std::string& from, const std::string& to) {
    if(from.empty())
        return;
    size_t start_pos = 0;
    while((start_pos = str.find(from, start_pos)) != std::string::npos) {
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
	HansoftSVNPusher pusher;

	bool updateAll = false;
	bool onlyDelete = false;
	if (argc > 1) {
	    // parse command line arguments
	    for (int i = 1; i < argc; i++) {
	        std::string flagprefix = "-";
	        std::string arg = argv[i];
            if (arg.compare(0, flagprefix.length(), flagprefix) == 0) {
                // parse flags
                if(arg.compare(flagprefix.length(), flagprefix.length() + 1, "a") == 0) {
                    updateAll = true;
                } else if (arg.compare(flagprefix.length(), flagprefix.length() + 1, "d") == 0) {
                    onlyDelete = true;
                }
            }
	    }
	}
    // check if properties file
	const char *props = "plugin.properties";
    ifstream ifile;
    ifile.open(props, ifstream::in);
    if (ifile) {
        // exists
        cout << "Properties file exists" << endl;
        ConfigFile cfg("plugin.properties");
        std::string serverValue =
                cfg.getValueOfKey<std::string>("server", "localhost");
        int portValue =
                cfg.getValueOfKey<int>("port", 50256);
        std::string databaseValue =
                cfg.getValueOfKey<std::string>("database", "Company projects");
        replaceAll(databaseValue, "%20", " ");
        std::string sdkUsernameValue =
                cfg.getValueOfKey<std::string>("sdkuser", "SDK");
        std:string sdkPasswordValue =
                cfg.getValueOfKey<std::string>("sdkpassword", "SDK");
        pusher.server = serverValue.c_str();;
        pusher.port = portValue;
        pusher.database = databaseValue.c_str();
        pusher.sdkuser = sdkUsernameValue.c_str();
        pusher.sdkpassword = sdkPasswordValue.c_str();

        cout << "Server:       " << serverValue << endl;
        cout << "Port:         " << portValue << endl;
        cout << "Database:     " << databaseValue << endl;
        cout << "SDK Username: " << sdkUsernameValue << endl;
        cout << "SDK Password: " << "*** ;-)" << endl;
    } else {
        cout << "No properties file" << endl;
	}
	return pusher.Run(updateAll, onlyDelete);
}
