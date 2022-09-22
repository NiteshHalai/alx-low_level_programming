#include"main.h"

/**
* cap_string - upper case
*
* @s: input function argument
* 
*
* Return: outpuy
*/
char *cap_string(char *s)
 int i
 {
   for(i=0; s[i]!='\0'; i++)
   {
      s[i] = toupper(s[i]);
      }
   return (s);
}
