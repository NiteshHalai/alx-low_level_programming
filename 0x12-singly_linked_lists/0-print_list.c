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
  
list_t tempPointer;
size_t count;

tempPointer = h;
count = 0;

while(tempPointer != null) {
  printf("%s ", tempPointer->value);
  tempPointer = tempPointer->next;
  tempPointer = tempPointer->next
  count++
}

return (count);
}
