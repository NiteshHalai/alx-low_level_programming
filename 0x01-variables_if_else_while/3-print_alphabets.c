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
while (ch <= 'z')
{
printf("%c", ch);
ch++;
}
char cha = 'A';
while (cha <= 'Z')
{
printf("%c", cha);
ch++;
}
printf("\n");
return (0);
}
