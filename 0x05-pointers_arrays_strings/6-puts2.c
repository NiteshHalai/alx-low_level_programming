#include"main.h"
/**
* print_rev - reverse string
*
* @s: input function argument
*
* Return: outpuy
*/

void puts2(const char *str)
{
unsigned long int i;
for (i = 0; i < strlen(*str); i+=2)
{
    putchar(str[i]);
}
}
