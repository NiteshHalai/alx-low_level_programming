#include "function_pointers.h"

/**
* print_name -  description
*
* @f: input function argument
* @name: input function argument
*
* Return: output
*/


void print_name(char *name, void (*f)(char *))
{

f(name);

}

