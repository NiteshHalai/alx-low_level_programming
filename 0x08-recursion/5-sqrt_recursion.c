#include"main.h"

/**
* _sqrt_recursion -  square root
*
* @n: input function argument
*
* Return: output
*/

int _sqrt_recursion(int n)
{
double tempval = n/2;
     
    do
    {
        if ((tempval*tempval) > n)
        {
            tempval /= 2;
        }
        if (tempval * tempval < n)
        {
            tempval += (n - tempval);
        }
    } while (((n - tempval) >= .001) || ((tempval - n) >= .001));
     
    return tempval;
}

