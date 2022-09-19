#include"main.h"

/**
* _strlen - swaps variable values
*
* @s: input function argument
*
* Return: outpuy
*/

int _strlen(char *s)
{
int i = 0, sum = 0;
char c = s[0];

while(c != '\0') {
sum++;
c = s[++i];
}
return (sum);
}
