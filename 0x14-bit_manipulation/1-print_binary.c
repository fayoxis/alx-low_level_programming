#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of an unsigned long integer.
 *
 * @num: Number to be printed in binary.
 *
 * Return: void
 */
void print_binary(unsigned long int num)
{
unsigned long int printbit = 1ul << 63;
/* Find the non-zero bit */
while (printbit > 0 && !(printbit & num))
printbit = printbit >> 1;
if (printbit == 0)
putchar('0');

/* Print binary representation  */
for (; printbit > 0; printbit = printbit >> 1)
{
if (printbit & num)
putchar('1');
else
putchar('0');
}
}
