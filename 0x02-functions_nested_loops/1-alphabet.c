#include"main.h"
/**
* main - Entry point
*
* Description: prints alphabet in low case
*
* Return: 0
*/
void print_alphabet(void)
{

char c;
for (c = 'a'; c <= 'z'; ++c)
{
putchar(c);
}
putchar('\n');
return (void);
}
