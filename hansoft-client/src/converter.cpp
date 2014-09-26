#include "converter.h"
#include <cstdlib>
#include <vector>
#include <cassert>

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
