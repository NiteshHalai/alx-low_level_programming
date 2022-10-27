#include"lists.h"
#include <string.h>

/**
* free_listint2 -  description
*
* @head: input function argument
*
* Return: output
*/

void free_listint2(listint_t **head)
{
listint_t *pNode = head, *pNext;

while (*pNode != NULL)
{
pNext = (*pNode)->next;
free(pNode);
pNode = pNext;
}

}
