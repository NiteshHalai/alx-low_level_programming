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

    char *buf;
    int fd;

    buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

    fd = open(filename, O_RDONLY);
 
   if(fd == -1)
    {return(0);};

 
    read(fd, buf, letters);
 
    close(fd);
    return (letters);
}
