#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @str1: The first input string.
 * @str2: The second input string.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *str_concat(char *str1, char *str2)
{
char *concatenated;
int len1, len2, i, j;
if (str1 == NULL)
str1 = "";

if (str2 == NULL)
str2 = "";
len1 = len2 = 0;
while (str1[len1] != '\0')
len1++;
while (str2[len2] != '\0')
len2++;
concatenated = malloc(sizeof(char) * (len1 + len2 + 1));
if (concatenated == NULL)
return (NULL);
for (i = 0; i < len1; i++)
concatenated[i] = str1[i];
for (j = 0; j < len2; j++, i++)
concatenated[i] = str2[j];

concatenated[i] = '\0';

return (concatenated);
}
