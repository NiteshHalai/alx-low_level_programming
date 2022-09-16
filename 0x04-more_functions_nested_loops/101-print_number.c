#include"main.h"

/**
* print_number - function to check if
* character is lowercase
*
* @n: checks input of function
*
* Return: print number
*/

void print_number(int n)
{
if (n < 0) {
_putchar('-');
n = -n;
} 
if (n/10)
print_number(n/10);
_putchar(n%10 + '0');
}
