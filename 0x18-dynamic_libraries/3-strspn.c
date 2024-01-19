#include "main.h"

/**
 * *_strspn - Calculates the length of a prefix substring
 * @s: the string to evaluate
 * @accept: The string containing the characters to match in s
 *
 * Return: returns The number of bytes in the initial segment of s
 * that consist only of characters from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j, h, flag;
i = 0;
for (i = 0; s[i] != '\0'; i++)
{
flag = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
h++;
flag = 1;
}
}
if (flag == 0)
{
return (h);
}
}
return (0);
}
