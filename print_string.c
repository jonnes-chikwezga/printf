#include <stdarg.h>
#include <unistd.h>
#include "main.h"
int print_string(const char *str)
{
const char *null_str = "(null)";

int len = 0;
int ret;
if (str == NULL) {
str = null_str;
}
while (*str != '\0') {
ret = write(STDOUT_FILENO, str++, 1);
if (ret == -1) {
return (-1);
}
len += ret;
}
return (len - 1);
}
