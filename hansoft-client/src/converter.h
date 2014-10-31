#ifndef _CONVERTER_H
#define _CONVERTER_H

#include <iostream>
#include <string>
#include <vector>
#include "HansoftSVNCommon.h"

std::wstring get_wstring(const std::string & s);
std::wstring get_wstring(const std::wstring & s);
std::string get_locale_string(const std::wstring & s);
std::string get_locale_string(const std::string & s);
void split(std::vector<STD_STRING> &theStringVector, const  STD_STRING  &theString, const  STD_STRING  &theDelimiter);
void split(std::vector<STD_STRING> &theStringVector, const  STD_STRING  &theString, const  STD_STRING  &theDelimiter, size_t startPos);

#endif /* _CONVERTER_H */