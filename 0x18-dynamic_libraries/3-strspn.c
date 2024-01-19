#include "main.h"

/**
 * *_strspn - it gets the length of prefix substring
 * @s: this is the string to evaluate
 * @accept: this is string containing the list
 * characters to match in s
 *
 * Return: returns the number of bytes in the
 * initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
int i, k, fl, flag;
fl = 0;
for (i = 0; s[i] != '\0'; i++)
{
flag = 0;
for (k = 0; accept[k] != '\0'; k++)
{
if (s[i] == accept[k])
{
fl++;
flag = 1;
}
}
if (flag == 0)
{
return (fl);
}
}
return (0);
}
