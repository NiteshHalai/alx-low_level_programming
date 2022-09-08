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
printf("Size of an int: %zu bytes\n", sizeof(intType));
printf("Size of a float: %zu bytes\n", sizeof(floatType));
printf("Size of a long int: %zu bytes\n", sizeof(longint));
printf("Size of a long long int: %zu bytes\n", sizeof(longlongint));
printf("Size of char: %zu byte\n", sizeof(charType));
return (0);
}
