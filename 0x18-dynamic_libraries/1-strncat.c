#include "main.h"

/**
 * _strncat - it concatenates n bytes from a string to another
 * @dest: this is the destination of the string
 * @src: it is the source string
 * @n: the number of bytes of str to concatenate
 *
 * Return: returns a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i, k;

i = 0;
k = 0;

while (dest[i] != '\0')
i++;

if (src[k] != '\0' && k < n)
{
dest[i] = src[k];
i++;
k++;
}

dest[i] = '\0';

return (dest);
}
