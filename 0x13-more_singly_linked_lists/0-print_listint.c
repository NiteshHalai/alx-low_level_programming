#include"lists.h"

/**
* print_listint -  description
*
* @h: input function argument
*
* Return: output
*/

size_t print_listint(const listint_t *h)
{
size_t count;

count = 0;

while (h)
{
printf("%d\n", h->int);
h = h->next;
count++;
}

return (count);
}
