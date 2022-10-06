#include"main.h"

/**
* _strcat -  description
*
* @ptr: input function argument
* @old_size: input function argument
* @new_size: input function argument
*
* Return: output
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
  void *ptr2 = malloc(new_size);
  if (ptr && ptr2) {
    memcpy(ptr2, ptr, old_size < new_size ? old_size : new_size);
  }
  if (ptr2 || (new_size == 0)) {
    free(ptr);
  }
  return ptr2;
}
