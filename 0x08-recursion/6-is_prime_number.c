#include"main.h"

/**
* is_prime_number - check if number is prime
*
* @dest: input function argument
* @src: input function argument
*
* Return: output
*/

int is_prime_number(int n)
{
    int 1;
    i = n/2;
    
    if(i==1)
    {
        return 1;
    }
    else if(n %i==0)
    {
         return 0;
    }     
    else
       {
         i = i -1; 
         is_prime_number(n);
      }

