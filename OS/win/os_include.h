#ifndef _OS_INCLUDE_H_
#define _OS_INCLUDE_H_

#define WIN32_LEAN_AND_MEAN //need define macro before include "windows.h",because windows.h include "winsock.h"  if not and include "winsock2.h", re-definition error when compiling
#include <windows.h>

#include <winsock2.h>
#include <ws2tcpip.h>  /* ipv6 */
#include <mswsock.h>
#include <shellapi.h>
#include <psapi.h>

#include <stdio.h>
#include <stdarg.h>
#include <string>
#include <direct.h>
#include <time.h>
#include <errno.h>
#include <signal.h>
#include <io.h>
#include <sys/types.h>
#include <sys/stat.h>

#include <set>
#include <vector>
#include <map>
#include <fstream>

#include "os_types.h"

#endif