#include"main.h"

/**
* is_palindrome -  check if palindrome
*
* @s: input function argument
*
* Return: output
*/

int is_palindrome(char *s)
{
int i=0,
int c=0;
const int n=strlen(s);
  if(i<n/2)
    {
     if(s[i]==s[n-i-1])
   c++;
   i++;
   return(is_palindrome(s));
}
else
{
if(c==i)
return 1;
else
return 0;
}
}
