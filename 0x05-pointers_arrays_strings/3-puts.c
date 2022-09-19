#include"main.h"
/**
* _puts - prints string
*
* @str: input function argument
*
* Return: outpuy
*/
void _puts(char *str)

{
   int i = 0;
   while(string[i])  
    {
        if( putchar(str[i]) == EOF)
        { 
            return EOF;
        }
        i++;
    }
   if(putchar('\n') == EOF)
   {
       return EOF;
   }
   return 1; 
}
