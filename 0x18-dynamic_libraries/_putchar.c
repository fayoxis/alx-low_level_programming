#include <unistd.h>

/**
 * _putchar - it writes the character c to stdout
 * @c: this is The character to print
 *
 * Return: return On success 1.
 * On error, returns -1 is returned,
 * and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
