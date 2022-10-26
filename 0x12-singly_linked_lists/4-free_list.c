#include"lists.h"
#include <string.h>

/**
* free_list -  description
*
* @head: input function argument
*
* Return: output
*/

void free_list(list_t *head)
{
    list_t *pNode = head, *pNext;

    while (NULL != pNode)
    {
        pNext = pNode->next;
        free(pNode);
        pNode = pNext;
    }

}
