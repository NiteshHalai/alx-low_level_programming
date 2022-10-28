#include"lists.h"
#include <string.h>

/**
* get_nodeint_at_index -  description
*
* @head: input function argument
* @index: input function argument
*
* Return: output
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{
 
listint_t *current = head;
unsigned int count = 0;
while (current != NULL) 
{
if (count == index)
return ((current));
count++;
current = current->next;

}
return(0);
}
