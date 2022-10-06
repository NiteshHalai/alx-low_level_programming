#include"main.h"

/**
* _calloc - Description
*
* @nmemb: input function argument
* @size: input function argument
*
* Return: output
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void* ptr;

ptr = (int*)calloc(nmemb, sizeof(size));

return (ptr);
}
