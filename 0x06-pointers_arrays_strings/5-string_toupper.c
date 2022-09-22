#include"main.h"

/**
* string_toupper - upper case
*
* @c: input function argument
* 
*
* Return: outpuy
*/
char *string_toupper(char *s)
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
}
