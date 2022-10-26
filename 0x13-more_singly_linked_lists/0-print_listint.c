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

while (h != NULL)
{
printf("%i\n", h->int);
else if (h->int == NULL)
h = h->next;
count++;
}

return (count);
}
