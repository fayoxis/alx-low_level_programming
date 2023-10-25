#include "main.h"
#include <stdio.h>

/**
 * _sqrt - Helper function for calculating the natural square root.
 * @num: Number to calculate the square root.
 * @i: Iterator number.
 * This function is a helper function used in calculating the
 * natural square root of a number. It takes a number and an
 * iterator as input and recursively searches for the square root.
 * The function checks if the square of the iterator is equal
 *  to the given number. If it is, the iterator is returned
 * as the natural square root. If the square of the iterator
 * exceeds the given number, -1 is returned.
 * Return: The natural square root of the given number,
 * or -1 if it is not a perfect square.
 */
int _sqrt(int num, int i);

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @num: Number to calculate the natural square root.
 *
 * This function calculates the natural square root of
 * a given number using recursion.It calls a helper function
 * _sqrt to perform the actual calculation.
 * If the given number is negative, the function returns -1.
 * Return: The natural square root of the given number,
 * or -1 if it is negative.
 */
int _sqrt_recursion(int num)
{
return (_sqrt(num, 1));
}

/**
 * _sqrt - Calculates the natural square root.
 * @num: Number to calculate the square root.
 * @i: Iterator number.
 *
 * This function is a helper function used in
 * calculating the natural square root of a number.
 * It takes a number and an iterator as input and
 * recursively searches for the square root.
 * The function checks if the square of the
 * iterator is equal to the given number.
 * If it is, the iterator is returned as the natural square root.
 * If the square of the iterator exceeds the given number, -1 is returned.
 * Return: The natural square root of the given number,
 * or -1 if it is not a perfect square.
 */
int _sqrt(int num, int i)
{
if (i * i > num)
return (-1);
if (i * i == num)
return (i);
return (_sqrt(num, i + 1));
}
