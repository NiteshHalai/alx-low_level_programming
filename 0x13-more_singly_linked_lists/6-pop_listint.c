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
int pop(struct Node** headRef)
{
    
    if (*head == NULL) {
        return -1;
    }
 
    listint_t* head = *head;
    int result = head->n;
 
    (*head) = (*head)->next;
 
    free(head);        
 
    return (result);
}
