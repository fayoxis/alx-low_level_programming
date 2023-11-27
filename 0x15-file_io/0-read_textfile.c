#include "main.h"

/**
 * read_textfile - Read and print the contents of a file.
 * @f_name: The name of the file to read.
 * @L: The number of letters to read and print.
 * Return: The actual number of letters read and  printed, or -1 on failure.
 **/

size_t read_textfile(const char *f_name, size_t L)
{
int fn, readed;
char *buffer;

if (!f_name)
return (0);
buffer = malloc(sizeof(char) * L);
if (!buffer)
return (0);

fn = open(f_name, O_RDONLY);
if (fn == -1)
{
free(buffer);
return (0);
}


readed = read(fn, buffer, L);
if (readed == -1)
{
free(buffer);
close(fn);
return (0);
}

write(STDOUT_FILENO, buffer, readed);

free(buffer);
close(fn);

return (readed);
}
