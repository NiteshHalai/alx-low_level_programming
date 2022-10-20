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
size_t i;
char ch[256] = {0};

for (i = 0; i < strlen(accept); i++) {
ch[accept[i]] = 1;
}

for (i = 0; i < strlen(s); i++) {
if (ch[s[i]] == 0) {
break;
}
}

return (i);
}
