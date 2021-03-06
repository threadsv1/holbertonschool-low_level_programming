#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *@filename: char
 *@letters: size_t
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf = malloc(sizeof(char) * letters);
int fd;
ssize_t rl, rw;
/* READ */
if (filename == NULL)
return (0);
fd = open(filename, O_RDWR);
if (fd == -1)
return (0);
rl = read(fd, buf, letters);
if (rl < 0)
return (0);
/* P0SIX */
rw = write(STDOUT_FILENO, buf, rl);
if (rw < 0)
return (0);
free(buf);
close(fd);
return (rw);
}
