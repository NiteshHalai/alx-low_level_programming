#include"main.h"

/**
* str_concat -  locates a character in a string
*
* @s1: input function argument
* @s2: input function argument
*
* Return: output
*/

char *str_concat(char *s1, char *s2)
{

  int length, j;

  length = 0;
  while (s1[length] != '\0') {
    ++length;
  }

  for (j = 0; s2[j] != '\0'; ++j, ++length)
  {
    s1[length] = s2[j];
  }

  s1[length] = '\0';

  puts(s1);

  return (s1);
}
