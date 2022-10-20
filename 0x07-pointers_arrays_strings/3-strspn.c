

#include <string.h>

unsigned int _strspn(char *s, char *accept)
{
int i;
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
