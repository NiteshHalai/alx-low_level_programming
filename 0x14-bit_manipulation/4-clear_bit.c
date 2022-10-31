#include"main.h"

/**
* clear_bit -  description
*
* @index: input function argument
* @n: input function argument
*
* Return: output
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
int mask = 1 << index;
*n = ((*n & ~mask) | (0 << index));
return (1);
}
