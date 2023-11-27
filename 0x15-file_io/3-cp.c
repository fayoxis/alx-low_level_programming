#include <stdio.h>
#include "main.h"


/**
 * copy_file - Copies the contents of one file to another.
 * @srcs: The path of the source file.
 * @dest: The path of the destination file.
 * Return: Returns 0 on success, -1 on failure.
 **/

void  copy_file(const char *srcs, const char *dest)
{
int od, td, readed;
char buffer[1024];
od = open(srcs, O_RDONLY);
if (!srcs || od == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", srcs);
exit(98);
}
td = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
while ((readed = read(od, buffer, 1024)) > 0)
{
if (write(td, buffer, readed) != readed || td == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
exit(99);
}
}
if (readed == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", srcs);
exit(98);
}
if (close(od) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", od);
exit(100);
}
if (close(td) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", td);
exit(100);
}
}


/**
 * main - Entry point of the program.
 * @arc: The argument count.
 * @arv: The argument vector.
 * Return: Returns 0 on success, 1 on
 * incorrect usage, -1 on error.
 **/
int main(int arc, char **arv)
{
if (arc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
copy_file(arv[1], arv[2]);
exit(0);
}
