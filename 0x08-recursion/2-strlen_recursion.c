#include"main.h"

/**
* _strlen_recursion -  length of string
*
* @s: input function argument
*
* Return: output
*/

int _strlen_recursion(char *s)
{
   If s is NULL 
       return 0
   Else 
      return 1 + _strlen_recursion(s + 1)
}
