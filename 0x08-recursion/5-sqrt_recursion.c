#include "main.h"
#include <stdio.h>

/**
  * _sqrt - Helper function for calculating the natural square root
  * @num: Number to calculate the square root
  * @i: Iterator number
  *
  * Return: The natural square root
  */
int _sqrt(int num, int i);

/**
  * _sqrt_recursion - Returns the natural square root of a number
  * @num: Number to calculate the natural square root
  *
  * Return: The natural square root
  */
int _sqrt_recursion(int num)
{
return (_sqrt(num, 1));
}

/**
  * _sqrt - Calculates the natural square root
  * @num: Number to calculate the square root
  * @i: Iterator number
  *
  * Return: The natural square root
  */
int _sqrt(int num, int i)
{
if (i * i > num)
return (-1);
if (i * i == num)
return (i);
return (_sqrt(num, i + 1));
}
