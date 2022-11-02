#include"main.h"
#define _POSIX_C_SOURCE  200809L
#define _GNU_SOURCE

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

char *buf;
int fd;
ssize_t nrd, nwr;

buf = malloc(sizeof(char) * (letters));
if (!buf)
return (0);

fd = open(filename, O_RDONLY);

if (fd == -1)
return (0);

nrd = read(fd, buf, letters);
nwr = write(STDOUT_FILENO, buf, nrd);

close(fd);
return (nwr);
}
