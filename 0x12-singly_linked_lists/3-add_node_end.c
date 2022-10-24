#include"lists.h"
#include <string.h>

/**
* add_node_end -  description
*
* @head: input function argument
* @str: input function argument
*
* Return: output
*/

list_t *add_node_end(list_t **head, const char *str)
{

list_t *lastNode;

list_t *newNode = malloc(sizeof(list_t));
if (!newNode)
return (NULL);

newNode->str = strdup(str);
newNode->len = strlen(str);

newNode->next = NULL;

if(*head == NULL)
*head = newNode;
else{
lastNode = *head;
   
while(lastNode->next != NULL)
{
lastNode = lastNode->next;
}
lastNode->next = newNode;
}
return (lastNode);
}
