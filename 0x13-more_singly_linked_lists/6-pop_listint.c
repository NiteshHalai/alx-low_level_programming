#include"lists.h"
#include <string.h>

/**
* pop_listint -  description
*
* @head: input function argument
*
* Return: output
*/

int pop_listint(listint_t **head)
{
    
    if (*head == NULL) {
        return -1;
    }
 
    int result;
    
    result = head->n;
 
    (*head) = (*head)->next;
 
    free(head);        
 
    return (result);
}
