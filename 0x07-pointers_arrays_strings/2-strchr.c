#include"main.h"

/**
* _strchr -  locates a character in a string
*
* @s: input function argument
* @c: input function argument
*
* Return: output
*/

char *_strchr(char *s, char c)
{
while (*s != c) {
if (! *s++) {
printf("null\n");
return NULL;
            }
}
printf("%s", s);
return (char *)s;
}
