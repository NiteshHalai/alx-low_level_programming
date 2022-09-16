#include"main.h"

/**
*print_numbers - Entry point
*Description: 'prints numbers 1 to 9'
*Return: 0123456789
*/
void print_numbers(void)
{
int n = '0';
while (n <= '9')
{
_putchar(n);
n++;
}
_putchar('\n');
}
