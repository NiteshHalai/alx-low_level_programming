#include"main.h"

/**
* _memset -  fills memory with a constant byte.
*
* @s: input function argument
* @b: input function argument
* @n: input function argument
*
* Return: output
*/

char *_memset(char *s, char b, unsigned int n)
{
    char *s_char = (char *)s;

    if (s == NULL) return NULL;

    while(*s_char && n > 0)
    {
        *s_char = b;
        s_char++;
        n--;
    }

    return s;
}

#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
        unsigned int i;

        i = 0;
        while (i < size)
        {
                if (i % 10)
                {
                        printf(" ");
                }
                if (!(i % 10) && i)
                {
                        printf("\n");
                }
                printf("0x%02x", buffer[i]);
                i++;
        }
        printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char buffer[98] = {0x00};

    simple_print_buffer(buffer, 98);
    _memset(buffer, 0x01, 95);
    printf("-------------------------------------------------\n");
    simple_print_buffer(buffer, 98);    
    return (0);
}
