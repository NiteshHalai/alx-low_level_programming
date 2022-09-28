#include"main.h"

/**
* _pow_recursion -  power tog
*
* @x: input function argument
* @y: input function argument
*
* Return: output
*/

int _pow_recursion(int x, int y)
{
    if(n==0){return 1;}
    
    int store;
    store = _pow_recursion(x,n/2);
    
    if(n%2==0)
    return (store*store);
    else
    {
        return (store*store*x);
    }
}
