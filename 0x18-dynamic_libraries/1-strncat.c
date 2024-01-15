#include "main.h"

/**
 * *_strncat - it concatenates n bytes from a string to another
 * @dest: The destination string.
 * @src: The source string.
 * @n: The number of bytes from src to concatenate.
 * Returns: A pointer to the resulting string dest.
 **/
char *_strncat(char *dest, char *src, int n)
{
int i, j;

i = 0;
j = 0;
while (dest[i] != '\0')
i++;
while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
