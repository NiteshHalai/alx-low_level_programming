#include"lists.h"

/**
* add_node -  description
*
* @head: input function argument
* @str: input function argument
*
* Return: output
*/

list_t *add_node(list_t **head, const char *str)
{

list_t *newNode = malloc(sizeof(list_t));
      newNode->str = str;
      newNode->len = strlen(str);

      newNode->next = *head;
      
      *head = newNode;
      
      return(newNode);
}
