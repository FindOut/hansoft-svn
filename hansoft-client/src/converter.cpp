#include "converter.h"
#include <cstdlib>
#include <vector>
#include <cassert>
#include <HPMSdkCpp.h>
#include <errno.h>

// Dummy overload
std::wstring get_wstring(const std::wstring & s)
{
	return s;
}

// Real worker
std::wstring get_wstring(const std::string & s)
{
	const char * cs = s.c_str();
#ifdef _MSC_VER
	const size_t wn = std::mbsrtowcs(NULL, &cs, 0, NULL);
#else
	const size_t wn = std::mbsrtowcs(NULL, &cs, 0, NULL);
#endif

	if (wn == size_t(-1))
	{
		std::cout << "Error in mbsrtowcs(): " << errno << std::endl;
		return L"";
	}

	std::vector<wchar_t> buf(wn + 1);
	const size_t wn_again = std::mbsrtowcs(buf.data(), &cs, wn + 1, NULL);

	if (wn_again == size_t(-1))
	{
		std::cout << "Error in mbsrtowcs(): " << errno << std::endl;
		return L"";
	}

	assert(cs == NULL); // successful conversion

	return std::wstring(buf.data(), wn);
}

// Dummy
std::string get_locale_string(const std::string & s)
{
	return s;
}

// Real worker
std::string get_locale_string(const std::wstring & s)
{
	const wchar_t * cs = s.c_str();
	const size_t wn = std::wcsrtombs(NULL, &cs, 0, NULL);

	if (wn == size_t(-1))
	{
		std::cout << "Error in wcsrtombs(): " << errno << std::endl;
		return "";
	}

	std::vector<char> buf(wn + 1);
	const size_t wn_again = std::wcsrtombs(buf.data(), &cs, wn + 1, NULL);

	if (wn_again == size_t(-1))
	{
		std::cout << "Error in wcsrtombs(): " << errno << std::endl;
		return "";
	}

	assert(cs == NULL); // successful conversion

	return std::string(buf.data(), wn);
}

void split(std::vector<STD_STRING> &theStringVector, const  STD_STRING  &theString, const  STD_STRING  &theDelimiter, size_t startPos)
{
	size_t start = startPos, end = 0;

	while (end != STD_STRING::npos)
	{
		end = theString.find(theDelimiter, start);

		// If at the end, use length=maxLength else use lengt=end-start
		STD_STRING trimmed = theString.substr(start,
			(end == std::string::npos) ? std::string::npos : end - start);
		size_t first = trimmed.find_first_not_of(hpm_str(" "));
		size_t last = trimmed.find_last_not_of(hpm_str(" ")) + 1;
		trimmed = trimmed.substr(
			first,
			last);
		theStringVector.push_back(trimmed);
//			theString.substr(start,
//			(end == std::string::npos) ? std::string::npos : end - start));

		// If at end, use start=maxSize else use start=end+delimiter
		start = ((end > (std::string::npos - 1))
			? std::string::npos : end + 1);
//		start = ((end > (std::string::npos - theDelimiter.size()))
//			? std::string::npos : end + theDelimiter.size());
	}
}

void split(std::vector<STD_STRING> &theStringVector, const  STD_STRING  &theString, const  STD_STRING  &theDelimiter) {
	size_t start = 0;
	split(theStringVector, theString, theDelimiter, start);
}
