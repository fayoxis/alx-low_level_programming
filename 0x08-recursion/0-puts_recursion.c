#include "main.h"

/**
  *  _puts_recursion - Prints a string followed by a new line
  * @str: The string to print
  *
  * Return: Nothing
  */
void  _puts_recursion(char *str)
{
	if (*str == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*str);
	str++;
	 _puts_recursion(str);
}
