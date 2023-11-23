#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * clear_bit - Sets value of a bit to 0 at a given index
  * @num: The n to modify
  * @index:  index in the nto modify
  *
  * This function sets the value  v of a bit to 0 at a given index,
  * takes pointer to an unsigned long integer/ the index of
  *the bit to modify as
  * parameters.
  *
  * Return:  if the operation was successful = 1, or -1 if an issue occurred.
  */
int clear_bit(unsigned long int *num, unsigned int index)
{
/* Check if index is within the range of  unsigned long integer */
if (index < sizeof(unsigned long int) * 8)
{
/* Set the bit at the given index to 0 */
*num &= ~(1UL << index);
return (1);
}
return (-1);
}
