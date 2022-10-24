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
list_t *t; 
while (head != NULL) { 
t = head->next; 
free(t); 
} 
} 
