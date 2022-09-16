#include"main.h"
/**
* print_number - Entry point
*
* Description: prints number
*
* Return: 0
*/
void print_number(int n);
{
const char *to_print = n;
unsigned int i;
for (i = 0; i < strlen(to_print); ++i)
{
putchar(to_print[i]);
}
putchar('\n');
return (0);
}
