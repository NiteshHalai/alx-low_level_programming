#include"main.h"

/**
* get_bit -  description
*
* @index: input function argument
* @n: input function argument
*
* Return: output
*/

int set_bit(unsigned long int *n, unsigned int index)
{
int mask = 1 << index;
*n = ((*n & ~mask) | (1 << index));
return (1);
}
