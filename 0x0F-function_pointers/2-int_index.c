#include "function_pointers.h"

/**
* array_iterator -  description
*
* @array: input function argument
* @size: input function argument
* @cmp: input function argument
*
* Return: output
*/

int int_index(int *array, int size, int (*cmp)(int))

{
size_t i;

for (i=0; i < size; i++)
while (cmp(array[i]) > 0){
if (i == size){
printf("%d", size);
return (-1);
}
else {
return (i);}
}
}
