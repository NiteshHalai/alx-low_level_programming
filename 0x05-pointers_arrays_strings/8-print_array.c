#include"main.h"
/**
* print_array - print half string
*
* @a: input function argument
* @n: input function argument
*
* Return: outpuy
*/

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n - 1; i++)
{
printf("%d, ", a[i]);
}
printf("%d\n", a[n]);
}
