#include"main.h"

void *malloc_checked(unsigned int b)
{
  int* ptr;
  ptr = (int*) malloc(sizeof(b));
  return (ptr);
  
}
