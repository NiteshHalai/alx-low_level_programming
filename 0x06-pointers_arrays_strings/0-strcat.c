#include"main.h"

/**
* _strcat - concatenates two strings
*
* @dest: input function argument
* @src: input function argument
*
* Return: outpuy
*/

char *_strcat(char *dest, char *src)
{
(*dest)? my_strcat(++dest, src): (*dest++ = *src++)? my_strcat(dest, src): 0 ;
return (dest)
}
