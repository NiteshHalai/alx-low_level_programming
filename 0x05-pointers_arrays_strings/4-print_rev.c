#include"main.h"
/**
* print_rev - reverse string
*
* @s: input function argument
*
* Return: outpuy
*/
void print_rev(char *s);

{  
    // declare variable  
    int i, len, temp;  
    len = strlen(s); 
      
  
    for (i = 0; i < len/2; i++)  
    {  

        temp = str1[i];  
        s[i] = s[len - i - 1];  
        s[len - i - 1] = temp;  
    }  
}  
