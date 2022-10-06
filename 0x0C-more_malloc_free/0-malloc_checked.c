<<<<<<< HEAD
#include"main.h"

/**
* malloc_checked -  what fucntion does
*
* @b: input function argument
*
* Return: output
*/

void *malloc_checked(unsigned int b)
{
  void* ptr;
  ptr = (void*) malloc(sizeof(b));
  return (ptr);
  
}
=======
#include"main.h"

/**
* malloc_checked -  what fucntion does
*
* @b: input function argument
*
* Return: output
*/

void *malloc_checked(unsigned int b)
{
void* ptr;
ptr = (void*) malloc(sizeof(b));
return (ptr);
}
>>>>>>> 843bbb4f2aa03740cd68fcb8bd36340b324203ad
