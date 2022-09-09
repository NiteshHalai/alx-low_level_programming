#include <stdlib.h>
#include <time.h>
/**
 *Description: checks whether number is positive or negative
 */
int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  if  (n > 0)
    printf (%z is positive)
    else if (n < 0)
      printf (%z is negative)
      else
	printf (%z is zero)
	  return (0);
}
