#include"lists.h"

/**
* list_len-  description
*
* @h: input function argument
*
* Return: output
*/

size_t list_len(const list_t *h)
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
