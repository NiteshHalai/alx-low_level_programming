#include"main.h"

/**
* _puts_recursion -  prints a string
*
* @s: input function argument
*
* Return: output
*/

void _puts_recursion(char *s)
{

if (*s == '\0')
{
putchar('\n');
}
else
{
putchar(*s);
_puts_recursion(s + 1);
}
}
