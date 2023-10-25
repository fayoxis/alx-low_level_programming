#include "main.h"

/**
  * factorial - Calculate the factorial of a number
  * @num: the number to calculate the factorial
  *
  * Return: factorial of the input number, or -1 if the input is negative
  */
int factorial(int num)
{
	if (num < 0)
		return (-1);

	if (num == 0)
		return (1);

	return (num * factorial(num - 1));
}
