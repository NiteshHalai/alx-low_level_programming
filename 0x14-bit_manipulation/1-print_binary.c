#include"main.h"

/**
* print_binary -  description
*
* @n: input function argument
*
* Return: output
*/

void print_binary(unsigned long int n)
{
int i,k,andmask, sum;

sum = 0;
for(i=15;i>=0;i--)
{
    andmask = 1 << i;
    k = n & andmask;
    

    if(k)
    {
        sum = sum+1;
            printf("1");
    }
    else if (sum > 1)
    
            printf("0");
    }
}
