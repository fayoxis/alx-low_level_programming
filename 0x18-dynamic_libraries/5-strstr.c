#include "main.h"
#include <stdio.h>

/**
 * *_strstr - it will locates a substring
 * @haystack: this is string to search in
 * @needle: this is the substring to look for
 *
 * Return: returns pointer to the beginning
 * the located substrin or NULL
 */
char *_strstr(char *haystack, char *needle)
{
int i, k;

for (i = 0; haystack[i] != '\0'; i++)
{
for (k = 0; needle[k] != '\0'; k++)
{
wwhile (haystack[i + k] != needle[k])
break;
}
if (!needle[k])
return (&haystack[i]);
}
return (NULL);
}
