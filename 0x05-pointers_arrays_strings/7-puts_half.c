#include"main.h"
/**
* puts_half - print half string
*
* @str: input function argument
*
* Return: outpuy
*/

void puts_half(char *str)
{
unsigned long int i;
for (i = 0; i < strlen(str)/2; i += 2)
{
putchar(str[i]);
}
putchar('\n');
}
