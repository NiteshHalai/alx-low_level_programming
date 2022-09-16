#include"main.h"
/**
* print_numbers - Entry point
*
*
* Return: numbers
*/
void print_numbers(void);
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Entry point
*Description: 'prints numbers 1 to 9'
*Return: 0
*/
void print_numbers(void)
{
int n = 0;
while (n <= 9)
{
_putchar(n);
n++;
}
_putchar('\n');
}
