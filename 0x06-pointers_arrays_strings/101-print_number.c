#include"main.h"

/**
* print_number - function that takes a pointer to an
* int as parameter and updates the value it points to to 98
*
* @n: input function argument
*
* Return: outpuy
*/

void print_number(int n)
{
    if (n < 0) {
        putchar('-');
        n = -n;
    }
 
    if (n/10)
        print_number(n/10);
 
    // Print the last digit
    putchar(n%10 + '0');
}
