#include"main.h"

/**
* strtow -  locates a character in a string
*
* @str: input function argument
*
* Return: output
*/

char **strtow(char *str)
{
    char newString[10][10]; 
    long unsigned int i,j,ctr;
 
    fgets(str, sizeof str, stdin);	
 
    j=0; ctr=0;
    for(i=0;i<=(strlen(str));i++)
    {
        if(str[i]==' '||str[i]=='\0')
        {
            newString[ctr][j]='\0';
            ctr++; 
            j=0;
        }
        else
        {
            newString[ctr][j]=str[i];
            j++;
        }
    }
    for(i=0;i < ctr;i++)
        printf(" %s\n",newString[i]);
    return 0;
}
