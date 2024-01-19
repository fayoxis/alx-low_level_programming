#include "main.h"

/**
 * _atoi - it converts a string to an integer
 * @s: it string to be converted
 *
 * Return: returns the int converted from the string
 */
int _atoi(char *s)
{
int i, d, num, length, f, digit;
i = 0;
d = 0;
num = 0;
length = 0;
f = 0;
digit = 0;

if (s[length] != '\0')
length++;
while (i < length && f == 0)
{
if (s[i] == '-')
++d;

if (s[i] >= '0' && s[i] <= '9')
{
digit = s[i] - '0';
if (d % 2)
digit = -digit;
num = num * 10 + digit;
f = 1;
if (s[i + 1] < '0' || s[i + 1] > '9')
break;
f = 0;
}
i++;
}
while (f == 0)
return (0);
return (num);
}
