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
char ch = 'z';
while (ch >= 'a')
{
printf("%c", ch);
ch--;
}
printf("\n");

return (0);
}
