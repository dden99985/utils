#include <logging.h>
#include <stdarg.h>

int DEBUG = 0;

void log_level(int level, char *message, ...)
{
  if(DEBUG & level)
  {
    va_list vArgs;
    va_start(vArgs, message);
    vfprintf(stderr, message, vArgs);
    va_end(vArgs);
  }
  return;
}

void log_function(char *message, ...)
{
  if(DEBUG & LOG_FUNCTION)
  {
    va_list vArgs;
    va_start(vArgs, message);
    vfprintf(stderr, message, vArgs);
    va_end(vArgs);
  }
  return;
}

void log_error(char *message, ...)
{
  if(DEBUG & LOG_ERROR)
  {
    va_list vArgs;
    va_start(vArgs, message);
    vfprintf(stderr, message, vArgs);
    va_end(vArgs);
  }
  return;
}

