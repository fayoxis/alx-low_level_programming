#include "main.h"

/**
 * _atoi - it Converts a string to an integer.
 * @s: The string to be converted is s.
 *
 * Return: The integer value converted from the string.
 */
int _atoi(char *s)
{
int n = 0;
int si = 1;
int i = 0;
/* Skip leading whitespace */
while (s[i] == ' ')
{
i++;
}
/* Check the si */
if (s[i] == '-')
{
si= -1;
i++;
}
else if (s[i] == '+')
{
i++;
}
/* Convert digits to integer */
while (s[i] >= '0' && s[i] <= '9')
{
n = n * 10 + (s[i] - '0');
i++;
}
return (n * si);
}
