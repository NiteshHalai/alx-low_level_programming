#include"main.h"

/**
* _strncpy - function that takes a pointer to an
* int as parameter and updates the value it points to to 98
*
* @dest: input function argument
* @src: input function argument
* @n: input function argument
*
* Return: outpuy
*/

char *_strncpy(char *dest, char *src, int n)
    size_t i;
    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    while (i < n) {
        dest[i++] = '\0';
    }
    return dest;
}
