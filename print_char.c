
#include "main.h"
int print_char(int c)
{
	int len = write(STDOUT_FILENO, &c, 1);
	return len;
}
