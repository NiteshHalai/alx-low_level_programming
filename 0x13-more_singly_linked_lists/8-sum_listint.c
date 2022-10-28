#include"lists.h"
#include <string.h>

/**
* sum_listint -  description
*
* @head: input function argument
*
* Return: output
*
*/

int sum_listint(listint_t *head)

{
 int sum = 0;
 listint_t* ptr = head;
 while (ptr != NULL) {
 sum += ptr->n;
 ptr = ptr->next;
 }
 return (sum);
}

