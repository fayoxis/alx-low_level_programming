#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates num bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @num: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int num)
{
char *result;
unsigned int len1 = 0, len2 = 0;
unsigned int k, v;

if (s1 != NULL)
{
for (len1 = 0; s1[len1] != '\0'; len1++)
;
}
if (s2 != NULL)
{
for (len2 = 0; s2[len2] != '\0'; len2++)
;
}
if (num < len2)
result = malloc(sizeof(char) * (len1 + num + 1))
;
else
result = malloc(sizeof(char) * (len1 + len2 + 1))
;
if (result == NULL)
return (NULL);
for (k = 0; k < len1; k++)
result[k] = s1[k];
for (v = 0; v < num && v < len2; v++)
result[k++] = s2[v];
result[k] = '\0';
return (result);
}
