#include"lists.h"

/**
* print_listint_safe -  description
*
* @head: input function argument
*
* Return: output
*/

size_t print_listint_safe(const listint_t *head)
{
size_t count;

count = 0;

while (head != NULL)
{
printf("%d\n", head->n);
head = head->next;
count++;
}

return (count);
}
