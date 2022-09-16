#include"main.h"
/**
* print_number - Entry point
*
* Description: prints number
*
* Return: 0
*/
void print_number(int n)
{
int mod;
while (n > 0)
{
mod = n % 10;
_putchar(mod);
n = n/10;
}
_putchar('\n');
}
