#include"lists.h"
#include <string.h>

/**
* add_nodeint_end -  description
*
* @head: input function argument
* @n: input function argument
*
* Return: output
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{

listint_t *lastNode;

listint_t *newNode = malloc(sizeof(listint_t));
if (!newNode)
return (NULL);

newNode->n = n;
newNode->next = NULL;

if (*head == NULL)
*head = newNode;
else
{
lastNode = *head;

while (lastNode->next != NULL)
{
lastNode = lastNode->next;
}
lastNode->next = newNode;
}
return (lastNode);
}
