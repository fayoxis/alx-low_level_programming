#include <stdio.h>

/**
 * main - Prints the name of the current source file.
 *
 * This program demonstrates how to use the __FILE__ macro to print
 * the name of the file being compiled. It is a simple example to
 * illustrate the usage of the macro.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
