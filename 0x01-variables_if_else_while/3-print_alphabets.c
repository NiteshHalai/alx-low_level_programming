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
char cha = 'A';

while (ch <= 'z')
{
printf("%c", ch);
ch++;
}

while (cha <= 'Z')
{
printf("%c", cha);
cha++;
}
printf("\n");
return (0);
}
