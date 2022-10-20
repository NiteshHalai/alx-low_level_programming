#include"main.h"

/**
* _memset -  fills memory with a constant byte.
*
* @s: input function argument
* @b: input function argument
* @n: input function argument
*
* Return: output
*/

char *_memset(char *s, char b, unsigned int n)
{
char *s_char = (char *)s;

if (s == NULL) return NULL;

while (*s_char && n > 0)
{
*s_char = b;
s_char++;
n--;
}

return (s);
}
