#include <stdio.h>

/**
*main - Entry point
* @argc: input function argument
* @argv: input function argument
*Return: 0
*/

int main(int argc, char *argv[])   
{
    int i;
    for (i = 0; i < argc; i++)
    {
        printf("%s", argv[i]);       
    }
    printf("\n");
    return (0);
}
