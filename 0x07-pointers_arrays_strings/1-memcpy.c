/**
* _strcat -  locates a character in a string
*
* @dest: input function argument
* @src: input function argument
*
* Return: outpuy
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{

int i;
char *csrc = (char *)src;
char *cdest = (char *)dest;



for (i = 0; i < n; i++)
    cdest[i] = csrc[i];
    
return (dest);
}
