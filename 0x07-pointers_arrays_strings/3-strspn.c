#include <string.h>
#include"main.h"

/**
* _strspn -  function description
*
* @s: input function argument
* @accept: input function argument
*
* Return: output
*/

unsigned int _strspn(char *s, char *accept)
{
int i;
int k;
int counter;

counter = 0;

for(i = 0; s[i] != '\0'; i++)
{
if(counter != i)
break;
for(k = 0; accept[k] != '\0'; k++)
{
if(s[i] == accept[k])
counter++;
}
}
return (counter);
}
