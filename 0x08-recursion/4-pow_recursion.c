#include "main.h"

/**
 * _pow_recursion - Returns the value of base raised to the power of power.
 * @base: The base value.
 * @power: The exponent value.
 *
 * This function calculates the result of base raised to the power of power.
 * It recursively multiplies the base by itself, reducing
 * the power by 1 each time, until the power reaches 0.
 * If the power is negative, the function returns -1. 
 * Return: The result of base raised to the power of power.
 */


int _pow_recursion(int base, int power)
{
int result;
if (power < 0)
return (-1);
if (power == 0)
return (1);
result = _pow_recursion(base, power - 1);
return (base * result);
}
