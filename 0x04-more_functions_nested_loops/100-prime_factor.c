#include <stdio.h> 
 
int main () { 
 
	long long int number=600851475143, large_factor=0, i=2; 
 
	while (number!=1) { 
		if (number%i==0) { 
			while (number%i==0) {
				number/=i; 
			} 
			large_factor=i; 
		} 
		i++; 
	} 
	printf ("%lld\n\n", large_factor); 
	return 0; 
} 
