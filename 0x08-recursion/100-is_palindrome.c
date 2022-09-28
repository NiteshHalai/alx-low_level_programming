#include"main.h"

/**
* is_palindrome -  check if palindrome
*
* @s: input function argument
*
* Return: output
*/

int is_palindrome(char *s)
{
    static int i,c=0;
	const int n=strlen(s);
    if(i<n/2)
    {
         if(s[i]==s[n-i-1])
    	c++;
    	i++;
    	is_palindrome(s);
	}
	else
	{
		if(c==i)
        return 1;
        else
        return 0;
}
}
