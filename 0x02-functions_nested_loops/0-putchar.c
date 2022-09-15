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
int i;
for (i = 0; i < strlen(to_print); ++i)
{
  puchar(to_print[i]);
}
putchar('\n');
return (0);
}
