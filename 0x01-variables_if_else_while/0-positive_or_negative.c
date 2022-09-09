#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *Description: checks whether number is positive or negative
 */
int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  if  (n > 0)
    printf ("%z is positive", sizeof(n));
  else if (n < 0)
    printf ("%z is negative", sizeof(n));
  else
    printf ("%z is zero", sizeof(n));
  return (0);
}
