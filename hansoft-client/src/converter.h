#ifndef _CONVERTER_H
#define _CONVERTER_H

#include <iostream>
std::wstring get_wstring(const std::string & s);
std::wstring get_wstring(const std::wstring & s);
std::string get_locale_string(const std::wstring & s);
std::string get_locale_string(const std::string & s);

#endif /* _CONVERTER_H */