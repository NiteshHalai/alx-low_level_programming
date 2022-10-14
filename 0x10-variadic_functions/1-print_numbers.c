#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_numbers -  description
*
* @separator: input function argument
* @n: input function argument
*
* Return: output
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
const char *sep;
unsigned int i;
va_list args;


va_start(args, n);

sep = "";
for (i = 0; i < n; i++)
{
int value = va_arg(args, int);
printf("%s%d", sep, value);
sep = separator;
}

}
