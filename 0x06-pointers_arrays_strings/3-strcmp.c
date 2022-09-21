#include"main.h"

/**
* _strncat - function that takes a pointer to an
* int as parameter and updates the value it points to to 98
*
* @dest: input function argument
* @src: input function argument
* @n: input function argument
*
* Return: outpuy
*/

char *_strncat(char *dest, char *src, int n)
{
    char* ptr = dest + strlen(dest);
 
    while (*src != '\0' && n--) {
        *ptr++ = *src++;
    }
 
    *ptr = '\0';
 
    return dest;
}
