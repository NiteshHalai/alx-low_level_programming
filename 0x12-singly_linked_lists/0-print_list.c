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
  if( h->str != NULL)
  {
    printf("[%d] %s\n", h->len, h->str);
  }
  else if ( h->str == NULL)
  {
    printf("[0] (nil)");
  }
  h = h->next;
    
  count++;
  
}

return (count);
}
