#include"main.h"
/**
* main - Entry point
*
* Description: prints _putchar
*
* Return: 0
*/
int main(void)
{
const char *to_print = "_putchar";
unsigned long int i;
for (i = 0; i < strlen(to_print); ++i)
{
putchar(to_print[i]);
}
putchar('\n');
return (0);
}
