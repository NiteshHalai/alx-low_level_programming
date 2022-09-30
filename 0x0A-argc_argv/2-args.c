#include <stdio.h>

/**
*main - Entry point
*Description: This proggrame prints all of arguments
*Return: 0
*/

void main(int argc, char *argv[])   
{
    int i;
    for (i = 0; i < argc; i++)
    {
        printf("%s ", argv[i]);       
    }
    printf("\n");
}
