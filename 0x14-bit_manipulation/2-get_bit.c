#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * getBitValue - Returns the value of the bit at a given index.
 * @number: The unsigned long integer.
 * @index: The index of the bit to retrieve, starting from 0.
 *
 * Return: The value of the bit at the specified index on success, or -1 if an issue occurred.
 */
int get_bit(unsigned long int number, unsigned int index)
{
unsigned int bitIndex;
for (bitIndex = 0; number > 0; bitIndex++)
{
if (bitIndex == index)
{
if (number % 2)
return (1);
else
return (0);
}
        
number = number / 2;
}
if (index > bitIndex && index < 63)
return (0);
return (-1);
}
