#include "main.h"

/**
 * wildcmp - Compare strings with wildcards
 * @str1: Pointer to the first string
 * @str2: Pointer to the second string
 * Return: 1 if the strings match, 0 otherwise
 */
int wildcmp(char *str1, char *str2)
{
if (*str1 == '\0')
{
if (*str2 != '\0' && *str2 == '*')
{
return (wildcmp(str1, str2 + 1));
}
return ((*str2 == '\0'));
}

if (*str2 == '*')
{
return (wildcmp(str1 + 1, str2) || wildcmp(str1, str2 + 1));
}
else if (*str1 == *str2)
{
return (wildcmp(str1 + 1, str2 + 1));
}

return (0);
}
