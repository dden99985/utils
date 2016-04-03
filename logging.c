#include <logging.h>
#include <stdarg.h>

int LOGGING = 0;

void log_message(int level, char *message, ...)
{
  if(LOGGING & level)
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
  if(LOGGING & LOG_FUNCTION)
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
  if(LOGGING & LOG_ERROR)
  {
    va_list vArgs;
    va_start(vArgs, message);
    vfprintf(stderr, message, vArgs);
    va_end(vArgs);
  }
  return;
}

