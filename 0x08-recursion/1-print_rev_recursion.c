#include"main.h"

/**
* _print_rev_recursion -  prints a reverse string
*
* @s: input function argument
*
* Return: output
*/

void _print_rev_recursion(char *s)
{
    if(s.size() == 0)
    {
        return;
    }
    _print_rev_recursion(s.substr(1));
    cout << s[0];
}
