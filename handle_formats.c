#include "main.h"
/** A fuction to handle the formart
*/

int handle_formats(const char *format, va_list args)
{
int total_chars = 0;

switch (*format) {
total_chars += print_char(va_arg(args, int));
 break;
case 's':
total_chars += print_string(va_arg(args, char *));
break;
case '%':
total_chars += print_char('%');
break;
case '\0':
return (-1);
default:
total_chars += print_char('%');
total_chars += write(STDOUT_FILENO, &(*format), 1);
break;
}
return (total_chars);
}
