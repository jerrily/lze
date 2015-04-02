#ifndef _OS_STRING_H_
#define _OS_STRING_H_

#include "os_include.h"

namespace los
{

std::string os_toString(const int64_t &val);
std::string os_toString(const uint64_t &val);
std::string os_toString(const int8_t &val);
std::string os_toString(const uint8_t &val);
std::string os_toString(const int16_t &val);
std::string os_toString(const uint16_t &val);
std::string os_toString(const int32_t &val);
std::string os_toString(const uint32_t &val);
std::string os_toString(const double &val);

void os_trimAllString(std::string &strline, const char ChSep);
bool os_compareStringCase(const std::string &strVal1, const std::string &strVal2);
int os_vsnsprintf(char *buffer, size_t count, const char *format, va_list argptr);

}//end namespace los

#endif