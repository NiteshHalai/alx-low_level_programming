#include"main.h"

/**
* _strcmp - function that takes a pointer to an
* int as parameter and updates the value it points to to 98
*
* @s1: input function argument
* @s2: input function argument
* 
*
* Return: outpuy
*/
int _strcmp(char *s1, char *s2)
{
    while (*s1)
    {
        if (*s1 != *s2) {
            break;
        }
        s1++;
        s2++;
    }
    return *(const unsigned char*)s1 - *(const unsigned char*)s2;
}
