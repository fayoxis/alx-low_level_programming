#include "main.h"

/**
 * _strcmp - Compares two strings lexicographically.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 * Returns: An integer less than 0 if s1 is less than s2,
 * 0 if s1 and s2 are equal,
 * or an integer greater than 0 if s1 is greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 == *s2)
{
if (*s1 == '\0')
{
return (0);
}
s1++;
s2++;
}
return (*s1 - *s2);
}
