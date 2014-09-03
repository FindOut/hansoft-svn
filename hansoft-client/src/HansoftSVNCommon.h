/**
* Copyright (c) - placeholder
*
*/

#ifndef HANSOFTSVN_COMMON_H_
#define HANSOFTSVN_COMMON_H_
#ifdef _MSC_VER
#define STD_STRING std::wstring
#define STD_STRINGSTREAM std::wstringstream
#define STD_OSTRINGSTREAM std::wostringstream
#define STD_COUT std::wcout
#define HS_CHAR wchar_t
#elif __GNUC__
#define STD_STRING std::string
#define STD_STRINGSTREAM std::stringstream
#define STD_OSTRINGSTREAM std::ostringstream
#define STD_COUT std::cout
#define HS_CHAR char
#endif
#endif /* HANSOFTSVN_COMMON_H_ */
