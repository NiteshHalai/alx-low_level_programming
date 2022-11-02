#include"main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
* read_textfile -  description
*
* @filename: input function argument
* @letters: input function argument
*
* Return: output
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
    FILE* ptr;
    char ch;
    long int count;
    size_t count_letters;

    ptr = fopen(filename, O_RDONLY);
    count = 0;
    count_letters = 0;
 
    if (ptr == NULL) {
        return (0);
    }
 
    do {
        ch = fgetc(ptr);
        printf("%c", ch);
        count++;
        count_letters++;
    } while (count_letters == letters);
 
    fclose(ptr);
    return (count);
}
