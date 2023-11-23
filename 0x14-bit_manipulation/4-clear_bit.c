#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * clear_bit - Sets the value of a bit to 0 at a given index.
  * @num: Pointer to the number to modify.
  * @index: Index in the number to modify.
  *
  * This function sets the value of a bit to 0 at a given index.
  * It takes a pointer to an unsigned long integer and the index of
  * the bit to modify as parameters.
  *
  * Return: Returns 1 if the operation was successful, or -1 if an issue occurred.
  */
int clear_bit(unsigned long int *num, unsigned int index)
{
unsigned int max_index = sizeof(unsigned long int) * 8;
/* Check if the index is within the range of unsigned long integer */
if (index < max_index)
{
/* Clear the bit at the given index to 0 */
unsigned int i = 0;
while (i <= index)
{
*num &= ~(1UL << i);
i++;
}
return (1);
}
return (-1);
}
