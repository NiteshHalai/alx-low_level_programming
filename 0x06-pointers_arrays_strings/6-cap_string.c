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
 {
     int i = 0;
 while( s[i] != '\0' )
 {
        if( s[i] >= 'a' && s[i] <= 'z' )
        {
           s[i] = s[i] - 32;
        }
        i++;
 }
 return  (s);
     
}
