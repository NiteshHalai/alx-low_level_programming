/**
*main - Entry point
*Description: 'sizes of different types'
*Return: 0
*/

#include <stdio.h>

int main(void)
{
int intType;
float floatType;
long long int longlongint;
long int longint;
char charType;

printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu byte(s)\n", sizeof(intType));
printf("Size of a long int: %zu byte(s)\n", sizeof(longint));
printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongint));
printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
return (0);
}
