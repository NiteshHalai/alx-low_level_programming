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
    printf ("n is positive");
  else if (n < 0)
    printf ("n is negative");
  else
    printf ("n=%z is zero");
  return (0);
}
