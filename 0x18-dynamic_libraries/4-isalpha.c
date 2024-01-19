#include "main.h"

/**
 * _isalpha - this will check for the alphabetic character
 * @c: this is the character to be checked
 * Return: returns 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
