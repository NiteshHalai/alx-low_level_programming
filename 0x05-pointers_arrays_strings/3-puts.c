#include"main.h"
/**
* _puts - prints string
*
* @str: input function argument
*
* Return: outpuy
*/
void _puts(char *str)
{
    int i;
    for(i=0;    ;i++)
    {
        if(*str[i]=='\0')
        {
            printf("\n");
            break;
        }
        printf("%c",*str);

    }

}
}
