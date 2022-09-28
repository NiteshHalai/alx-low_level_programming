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
int low = 1;
int high = n;
int mid;

    if (low <= high) {
        int mid = (low + high) / 2;
        if ((mid * mid <= n)
            && ((mid + 1) * (mid + 1) > n)) {
            return mid;
        }

        else if (mid * mid < n) {
            return _sqrt_recursion(mid + 1, high, n);
        }
        else {
            return _sqrt_recursion(low, mid - 1, n);
        }
    }
    return low;
}
