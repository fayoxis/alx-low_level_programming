#include "main.h"

/**
 * *_strcat - it is concatenates two strings
 * @dest: The string to which the second string will be appended.
 * @src: The string that will be added to the end of the first string.
 * Returns: A pointer to the resulting string after concatenation.
 */
char *_strcat(char *dest, char *src)
{
int i, j;

i = 0;
j = 0;

while (dest[i] != '\0')
i++;

while (src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}

dest[i] = '\0';
return (dest);
}
