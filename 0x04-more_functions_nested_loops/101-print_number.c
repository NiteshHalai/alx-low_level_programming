/* C program to print a long int number
 using putchar() only*/
#include <stdio.h>
 
void print_number(int n)
{

    if (n < 0) {
        _putchar('-');
        n = -n;
    }
 

    if (n/10)
        _putchar(n/10);
 

    putchar(n%10 + '0');
}
