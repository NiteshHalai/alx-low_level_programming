#include"lists.h"
#include <string.h>

/**
* delete_nodeint_at_index -  description
*
* @head: input function argument
* @index: input function argument
*
* Return: output
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)

{

listint_t *temp = *head;
unsigned int i;
listint_t *del;

if (*head == NULL)
return (-1);

del = temp->next;

if (index == 0)
{
*head = temp->next;
free(temp);
return (1);
}
else
{
for (i = 0; i < index - 1; i++)
temp = temp->next;


temp->next = temp->next->next;
del->next = NULL;
free(del);
}
return (1);
}
