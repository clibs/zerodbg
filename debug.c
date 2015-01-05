
//
// debug.c
//

#include "debug.h"

FILE * LOG_FILE = stderr;

void debug_set_log(FILE * log_file) {
    if(log_file != NULL)
        LOG_FILE = log_file;
    else
        LOG_FILE = stderr;
}

FILE * debug_get_log() {
    return LOG_FILE;
}

void debug_printf(const char * format, ...)
{
    va_list args;

    va_start(args, format);
    vfprintf(LOG_FILE, format, args);
    va_end(args);
}

void debug_fprintf(FILE * log_file, const char * format, ...) {
    va_list args;

    va_start(args, format);
    vfprintf(log_file, format, args);
    va_end(args);
}
