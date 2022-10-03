#include"main.h"

/**
* argstostr -  locates a character in a string
*
* @ac: input function argument
* @av: input function argument
*
* Return: output
*/

char *argstostr(int ac, char **av)
{
    
    unsigned int i;
    size_t len = 0;
    char *_all_args, *all_args;
    
    for(i=1; i<ac; i++) {
        len += strlen(av[i]);
    }

    _all_args = all_args = (char *)malloc(len+ac-1);

    for(i=1; i<ac; i++) {
        memcpy(_all_args, av[i], strlen(av[i]));
        _all_args += strlen(av[i])+1;
        *(_all_args-1) = ' ';
    }
    *(_all_args-1) = 0;

    printf("All %d args: '%s'\n", argc, all_args);

    free(all_args);

    return 0;
}
