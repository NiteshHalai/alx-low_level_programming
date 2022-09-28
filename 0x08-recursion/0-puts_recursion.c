#include"main.h"

/**
* _puts_recursion -  prints a string
*
* @s: input function argument
*
* Return: output
*/

void _puts_recursion(char *s)
{
 if(*s=='\0')
 return ;
 printf("%c",*s);
 _puts_recursion(s+1);
 
 putchar('\n');
}
