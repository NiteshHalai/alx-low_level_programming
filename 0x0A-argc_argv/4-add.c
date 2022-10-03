#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* @argc: input function argument
* @argv: input function argument
* Return: 0
*/

int main(int argc, char *argv[])
{
int sum;
int i;

sum=0;
for(i=1; i<argc; i++)
{
sum += atoi(argv[i]);
}
	
printf("%d\n",sum);
	
return 0;
}
