#include"main.h"

/**
* swap_int - swaps variable values
*
* @a: input function argument
*
* @b: input function argument
*
* Return: outpuy
*/

void swap_int(int *a, int *b)
{

int temp;

temp = *a;
*a = *b;
*b = temp;
}
