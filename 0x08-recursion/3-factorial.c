#include "main.h"

/**
 * factorial - Calculates the factorial of a number.
 * @num: The number to calculate the factorial.
 * This function calculates the factorial of the input number.
 * If the input number is negative, it returns -1.
 * The factorial of a number is the product of all positive integers
 * less than or equal to that number.
 * Return: The factorial of the input number, or -1 if the input is negative.
 */
int factorial(int num)
{
if (num < 0)
return (-1);
if (num == 0)
return (1);
return (num * factorial(num - 1));
}
