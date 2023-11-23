#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * get_bit - Return the value of the bit given index.
 * @num: The unsigned long integer n.
 * @index:  index, starting from 0 of the bit wanna to get.
 *
 * Return:  value of the bit at @index on success, or -1 if an issue occurred.
 */
int get_bit(unsigned long int num, unsigned int index)
{
unsigned int v_index = 0;
while (num)
{
if (v_index == index)
{
if (num % 2)
return (1);
else
return (0);
}
num = num / 2;
v_index++;
}
if (index > v_index && index < 63)
return (0);
return (-1);
}

