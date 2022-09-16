#include"main.h"

/**
*print_most_numbers - Entry point
*Description: 'prints numbers 1 to 9 except 2 and 4'
*Return: 01356789
*/
void print_most_numbers(void)
{
int n = '0';
while (n <= '9')
{
if (n != '2' && n != '4')
_putchar(n);
n++;
}
_putchar('\n');
}
