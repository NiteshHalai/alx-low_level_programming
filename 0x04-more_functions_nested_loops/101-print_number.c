/* C program to print a long int number
 using putchar() only*/
#include <stdio.h>
 
void print_number(int n)
{

    if (n < 0) {
        putchar('-');
        n = -n;
    }
 

    if (n/10)
        print(n/10);
 

    putchar(n%10 + '0');
}
