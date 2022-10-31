#include"main.h"

/**
* get_bit -  description
*
* @index: input function argument
* @n: input function argument
*
* Return: output
*/

int get_bit(unsigned long int n, unsigned int index)
{
int bitStatus;
bitStatus = (n >> index) & 1;
return (bitStatus);
}
