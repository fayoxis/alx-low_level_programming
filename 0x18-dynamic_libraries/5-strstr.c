#include "main.h"
#include <stdio.h>

/**
 * *_strstr - it alocates a substring
 * @haystack: this is the string to be search
 * @needle: thi sis the substring to look for
 * Return: return pointer to the beginningof located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;
for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
break;
}
if (!needle[j])
return (&haystack[i]);
}
return (NULL);
}
