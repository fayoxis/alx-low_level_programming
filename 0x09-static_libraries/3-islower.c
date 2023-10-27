#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * @c: the character to be checked
 *
 * Description: This function checks whether a character is lowercase or not.
 * It returns 1 if the character is lowercase, and 0 otherwise.
 * Return: 1 if the character is lowercase, 0 otherwise.
 */

int _islower(int c)
{
return (c >= 'a' && c <= 'z');
}
