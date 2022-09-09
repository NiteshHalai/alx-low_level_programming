#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Entry point
*Description: 'prints alphabet in lowcase and upcase'
*Return: 0
*/

int main(void)
{
char ch = 'a';
while (ch <= 'Z')
{
putchar("%c", ch);
ch++;
}
printf("\n");

return (0);
}
