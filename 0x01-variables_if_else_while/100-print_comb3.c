#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Entry point
*Description: 'prints alphabet in reverse lowcase'
*Return: 0
*/
int main(void)
{
int i;
int j;
for (i = '0' ; i <= '3' ; i++)
{
for (j = '0' ; (j <= '3') && (j >= '2') ; j++)
{
putchar(i);
putchar(j);
}
}

putchar('\n');

return (0);
}
