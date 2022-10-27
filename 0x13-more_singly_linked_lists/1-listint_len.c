#include"lists.h"

/**
* listint_len -  description
*
* @h: input function argument
*
* Return: output
*/

size_t listint_len(const listint_t *h)
{
size_t count;

count = 0;

while (h != NULL)
{
h = h->next;
count++;
}

return (count);
}
