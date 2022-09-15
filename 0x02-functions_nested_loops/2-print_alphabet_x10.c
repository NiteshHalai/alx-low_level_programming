#include"main.h"
/**
* print_alphabet_x10 - Entry point
*
* Description: prints alphabet in low case x10
*
*/
void print_alphabet_x10(void)
{

int i;
char c;
for (i = 1; i <= 10; ++i)
{
for (c = 'a'; c <= 'z'; ++c)
{
putchar(c);
putchar('\n');
}
}
}
