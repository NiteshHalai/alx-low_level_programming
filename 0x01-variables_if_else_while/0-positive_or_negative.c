#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Entry point
*Description: 'checks whether number is positivr, nrgative, zero'
*Return: 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if  (n > 0)
printf("%n is positive");
else if (n < 0)
printf("%n is negative");
else
printf("%n is zero", n);
return (0);
}
