#include"main.h"
/**
* print_rev - reverse string
*
* @s: input function argument
*
* Return: outpuy
*/
void print_rev(char *s)
{
int l, i;
char *begin_ptr, *end_ptr, ch, *str;
l = strlen(s);
begin_ptr = s;
end_ptr = s;

for (i = 0; i < l - 1; i++)
end_ptr++;

for (i = 0; i < l / 2; i++) 
{
ch = *end_ptr;
*end_ptr = *begin_ptr;
*begin_ptr = ch;

begin_ptr++;
end_ptr--;

char str;

*str = *s;
}
}
