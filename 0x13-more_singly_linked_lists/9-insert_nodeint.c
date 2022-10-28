#include"lists.h"
#include <string.h>

/**
* insert_nodeint_at_index -  description
*
* @head: input function argument
* @idx: input function argument
* @n: input function argument
*
* Return: output
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *newNode = (listint_t *) malloc(sizeof(listint_t));
newNode->n = n;
newNode->next = NULL;

if (idx == 0)
{
newNode->next = *head;
*head = newNode;
return (newNode);
}
else
{
listint_t *temp = *head;

while (--n)
temp = temp->next;
newNode->next = temp->next;
temp->next = newNode;
return (temp);
}
}
