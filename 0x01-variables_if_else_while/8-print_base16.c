#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Entry point
*Description: 'prints numbers 1 to 15 in lowcase'
*Return: 0
*/
int main(void)
{
int n = '0';
int c = 'a';

while (n <= '9')
{
putchar(n);
n++;
}

while (c <= 'f')
{
putchar(c);
c++;
}
putchar('\n');

return (0);
}
