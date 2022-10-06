#include"main.h"

void *malloc_checked(unsigned int b)
{
  void* ptr;
  ptr = (void*) malloc(sizeof(b));
  return (ptr);
  
}
