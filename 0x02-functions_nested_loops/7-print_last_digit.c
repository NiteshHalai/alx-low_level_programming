#include"main.h"

/**
* print_last_digit - print last digit
*
* @i: checks input of function
*
* Return: returns 1 if `c` is lowercase
*         otherwise 0
*/

int print_last_digit(int i)
{
int n;
n = i % 10;
_putchar(n + '0');
return (n);
}
