#include"main.h"

/**
* flip_bits -  description
*
* @m: input function argument
* @n: input function argument
*
* Return: output
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int a;
int count = 0;
a = n ^ m;
while (a > 0)
{
count++;
a &= (a - 1);
}
return (count);
}
