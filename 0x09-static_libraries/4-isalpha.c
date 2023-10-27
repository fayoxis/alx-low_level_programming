#include "main.h"
/**
 * _isalpha - Check if character is an alphabetic character.
 * @c: The character to be checked
 *
 * Return: 1 if the character is an alphabet
 * character (lowercase or uppercase), 0 otherwise.
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else

return (0);
}
