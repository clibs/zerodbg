
//
// debug.c
//

#include "debug.h"

void debug_fprintf(FILE * log_file, const char * format, ...) {
    va_list args;

    va_start(args, format);
    vfprintf(log_file, format, args);
    va_end(args);
}