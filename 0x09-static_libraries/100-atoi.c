#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 *
 * @s: The input string.
 *
 * Return: The converted integer value.
 */
int _atoi(char *s)
{
unsigned int c = 0, sz = 0, bn = 0, pw = 1, m = 1, i;

/* Iterate through the string until the end is reached */
while (*(s + c) != '\0')
{
/* Break the loop if non-digit characters are encountered after digits */
if (sz > 0 && (*(s + c) < '0' || *(s + c) > '9'))
break;
/* Handle negative sign */
if (*(s + c) == '-')
pw *= -1;
/* Calculate the size of the number */
if ((*(s + c) >= '0') && (*(s + c) <= '9'))
{

if (sz > 0)
m *= 10;
sz++;
}
c++;
}
/* Convert the string to an integer */
for (i = c - sz; i < c; i++)
{
bn = bn * 10 + (*(s + i) - '0');
}

return (bn * pw);
}
