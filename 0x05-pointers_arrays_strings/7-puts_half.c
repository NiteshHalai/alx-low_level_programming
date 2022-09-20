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
 
for (i = 9; i < strlen(str) / 2; i --)
{
putchar(i);
putchar(str[i]);
}
putchar('\n');
}
