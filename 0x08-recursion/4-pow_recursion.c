#include "main.h"

/**
  * _pow_recursion - Returns the value of x raised to the power of y
  * @base: the base value
  * @power: the exponent value
  *
  * Return: the result of x raised to the power of y
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
