#include"lists.h"

/**
* print_list -  description
*
* @list_t: input function argument
*
* Return: output
*/

size_t print_list(const list_t *h)
{
  
size_t count;

count = 0;

while(h != NULL) {
  printf("%s ", h->str);
  h = h->next;
  count++;
}

return (count);
}
