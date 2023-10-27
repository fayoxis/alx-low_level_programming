#include "main.h"

/**
 * _strstr - Finds the first occurrence of the substring
 * needle in the string haystack.
 * @haystack: The entire string.
 * @needle: The substring.
 *
 * Return: Pointer to the beginning of the located
 * substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
char *b_haystack;    
/* Pointer to the beginning of the current 
* section of haystack being compared 
*/
char *p_needle;
/* Pointer to the current c being compared in needle */
while (*haystack != '\0')
{
b_haystack = haystack;
p_needle = needle;
while (*haystack != '\0' && *p_needle !=
'\0' && *haystack == *p_needle)
{
haystack++;
p_needle++;
}
if (!*p_needle)
            
return (b_haystack);
haystack = b_haystack + 1;
}
return (0);
}
