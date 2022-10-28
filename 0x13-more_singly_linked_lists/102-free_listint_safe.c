#include"lists.h"
#include <string.h>

/**
* free_listint_safe -  description
*
* @head: input function argument
*
* Return: output
*/

size_t free_listint_safe(listint_t **h)
{
listint_t *pNode = *h, *pNext;
size_t size;

size = listint_len(*h);

while (pNode != NULL)
{
pNext = pNode->next;
free(pNode);
pNode = pNext;
}
return (size);
}
