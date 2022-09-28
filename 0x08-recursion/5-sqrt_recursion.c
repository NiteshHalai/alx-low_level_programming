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
int sqrtSearch(int low, int high, int N)
{

int low = 1;
int high = n;
int mid;

    if (low <= high) {
        int mid = (low + high) / 2;
        if ((mid * mid <= N)
            && ((mid + 1) * (mid + 1) > N)) {
            return mid;
        }

        else if (mid * mid < N) {
            return _sqrt_recursion(mid + 1, high, N);
        }
        else {
            return _sqrt_recursion(low, mid - 1, N);
        }
    }
    return low;
}
}
