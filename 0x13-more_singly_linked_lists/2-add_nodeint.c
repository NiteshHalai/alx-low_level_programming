#include"lists.h"
#include <string.h>

/**
* add_nodeint -  description
*
* @head: input function argument
* @n: input function argument
*
* Return: output
*/

listint_t *add_nodeint(listint_t **head, const int n)
{

list_t *newNode = malloc(sizeof(listint_t));
if (!newNode)
return (NULL);

newNode->next = *head;

*head = newNode;

return (*head);
}
