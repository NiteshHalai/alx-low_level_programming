#include"main.h"
/**
* print_array - print half string
*
* @a: input function argument
* @n: input function argument
*
* Return: outpuy
*/

void print_array(int *a, int n)
{      
  
    //Calculate length of array    
    int length = sizeof(a)/sizeof(a[0]);    
            
    for (int i = 0; i < n; i++) {     
        printf("%d ", a[i]);     
    }      
     
    return (0);    
}      
