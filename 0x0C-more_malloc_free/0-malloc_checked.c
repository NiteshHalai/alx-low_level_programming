#include"main.h"

/**
* malloc_checked - Description
*
* @b: input function argument
*
* Return: output
*/
void *malloc_checked(unsigned int b)
{
void* ptr;

ptr = (void*)malloc(sizeof(b));

return (ptr);
}
