#include <unistd.h>

/**
 * _putchar - it writes the character c to stdout
 * @c: this is The character to print
 *
 * Return: returns On success 1.
 * On error, -1 is returned
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
