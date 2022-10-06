#include"main.h"

/**
* string_nconcat - decription
*
* @s1: input function argument
* @s2: input function argument
* @n: input function argument
*
* Return: outpuy
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
char *_strncat(char *dest, char *src, int n)
{
    char* ptr = s1 + strlen(s1);
 
    while (*s2 != '\0' && n--) {
        *ptr++ = *s2++;
    }
 
    *ptr = '\0';
 
    return s1;
}
