#include "function_pointers.h"

/**
* array_iterator -  description
*
* @array: input function argument
* @size: input function argument
* @action: input function argument
*
* Return: output
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

for (i = 0; i < size; i++)
action(array[i]);
}
