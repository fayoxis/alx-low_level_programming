#include "main.h"

/**
  * _print_rev_recursion - Prints a string in reverse.
  * @str: The string to reverse.
  *
  * Recursively prints a given string in reverse order.
  * Moves to the next character and recursively calls itself.
  * After the recursive call, moves back and prints the character.
  * Return: Nothing.
  */
void _print_rev_recursion(char *str)
{
	if (*str == '\0')
	{
		return;
	}

	str++;
	_print_rev_recursion(str);
	str--;
	_putchar(*str);
}
