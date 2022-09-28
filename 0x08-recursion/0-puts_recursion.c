#include"main.h"

/**
* _puts_recursion(char *s) -  prints a string
*
* @s: input function argument
*
* Return: output
*/

void _puts_recursion(char *s)
{
 if(*s=='\0')//null character
 return ;
 printf("%c",*s);
 PrintString(s+1);
}
