#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Entry point
*Description: 'prints numbers 1 to 9'
*Return: 0
*/
int main(void)
{
int n = 0;
while (n <= 8)
{
printf("%i, ", n);
n++;
}
printf("9\n");
return (0);
}
