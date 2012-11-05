
//
// debug.h
//

#ifndef __debug_h__
#define __debug_h__

#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdarg.h>
#include <time.h>

void debug_fprintf(FILE * log_file, const char * format, ...);

#ifdef NDEBUG
#define debug(M, ...)
#else
#define debug(M, ...) debug_fprintf(stderr, "DEBUG %s:%d: " M "\n", __FILE__, __LINE__, ##__VA_ARGS__)
#endif

#endif