#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_strings -  description
*
* @separator: input function argument
* @n: input function argument
*
* Return: output
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
const char *sep;
unsigned int i;
va_list args;


va_start(args, n);

sep = "";
for (i = 0; i < n; i++)
{
const char value = va_arg(args, const char*);
printf("%s%s", sep, value);
sep = separator;
}
printf("\n");

}
