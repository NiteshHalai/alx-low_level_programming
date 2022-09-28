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
    
    int store;
    
    if(y==0){return 1;}
    

    store = _pow_recursion(x,y/2);
    
    if(y%2==0)
    return (store*store);
    else
    {
        return (store*store*x);
    }
}
