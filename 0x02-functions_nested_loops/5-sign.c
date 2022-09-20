#include"main.h"

/**
* print_sign - check sign
*
* @n: checks input of function
*
* Return: returns 0 if 0, -1 if less than zero
*         1 is more than zero
*/

int print_sign(int n)
{
if (n == 0)
return (0);
else if (n < 0)
return (-1);
return (+1);
}
