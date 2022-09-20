#include"main.h"
/**
* _strcpy - print half string
*
* @dest: input function argument
* @src: input function argument
*
* Return: outpuy
*/


char *_strcpy(char *dest, char *src)
{
    char *p = dest;
    while ((*p = *src) != '\0') {
        p++;
        src++;
    }
    return dest;
}
