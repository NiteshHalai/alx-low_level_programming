#include"main.h"
/**
* puts2 - print every other character
*
* @str: input function argument
*
* Return: outpuy
*/

void puts2(char *str)
{
unsigned long int i;
for (i = 0; i < strlen(str); i += 2)
{
putchar(str[i]);
putchar('\n');
}
}
