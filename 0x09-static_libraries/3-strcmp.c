#include "main.h"
/**
 * _strcmp - Compares two strings.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Description: This function compares the 
 * characters of the two input strings and determines
 * their relative order based on the ASCII values
 *of the corresponding characters. The comparison is
 * performed character by character until a difference 
 * is found or the end of both strings is reached.
 *
 * Return: 0 if the strings are equal.
 * A positive number if the first differing
 * character in s1 has a greater ASCII value than
 * the corresponding character in s2. A negative
 * number if the first differing character in s1 has
 * a lesser ASCII value than the corresponding
 * character in s2.
 */
int _strcmp(char *s1, char *s2)
{
	int k = 0, bp = 0;

	while (bp == 0)
	{
		if ((*(s1 + k) == '\0') && (*(s2 + k) == '\0'))
			break;
		bp = *(s1 + k) - *(s2 + k);
		k++;
	}

	return (bp);
}
