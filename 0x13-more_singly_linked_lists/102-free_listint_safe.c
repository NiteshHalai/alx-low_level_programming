#include"lists.h"
#include <string.h>

/**
* free_listint_safe -  description
*
* @h: input function argument
*
* Return: output
*/

size_t free_listint_safe(listint_t **h)
{
listint_t *pNode = *h, *pNext;

size_t count;

count = 0;

while (h != NULL)
{
*h = (*h)->next;
count++;
}

while (pNode != NULL)
{
pNext = pNode->next;
free(pNode);
pNode = pNext;
}
return (count);
}
