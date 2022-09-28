/**
* factorial -  locates a character in a string
*
* n: input function argument
*
* Return: output
*/

int factorial(int n)
{
if (n == 0)
{
return (1);
}
return ( n * factorial (n - 1));
}
