#include <stdio.h>

/**
*main - Entry point
*Description: This proggrame prints number of arguments
*Return: 0
*/

int main(int argc, char *argv[])
{
(void)argv;
argc--;
printf("%i\n",argc);
return (0);
}
