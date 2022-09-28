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
    if(str.size() == 0)
    {
        return;
    }
    _print_rev_recursion(str.substr(1));
    cout << str[0];
}
