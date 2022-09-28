#include"main.h"

/**
* _puts_recursion(char *s) -  prints a string
*
* @s: input function argument
*
* Return: output
*/

void _puts_recursion(char *s)
{
char *to_print = s
unsigned long int i;
for (i = 0; i < strlen(to_print); ++i)
{
putchar(to_print[i]);
}
putchar('\n');
}
