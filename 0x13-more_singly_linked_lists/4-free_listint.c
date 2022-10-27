#include"lists.h"
#include <string.h>

/**
* free_listint -  description
*
* @head: input function argument
*
* Return: output
*/

void free_listint(listint_t *head)
{
listint_t *pNode = head, *pNext;

while (pNode != NULL)
{
pNext = pNode->next;
free(pNode);
pNode = pNext;
}

}
