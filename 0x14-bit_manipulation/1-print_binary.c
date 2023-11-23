#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_binary - Prints an unsigned long interger in binary format.
 *
 * @num:  n to be printed in binary.
 *
 * Return: return void
 */
void print_binary(unsigned long int num)
{
unsigned long int printbit = 1ul << 63;
char w = '0';


/* Find the  non-zero bit */
while (!(printbit & num) && printbit != 0)
printbit = printbit >> 1;
if (printbit == 0)
putchar(w);
/* Print binary representation  */
while (printbit)
{
if (printbit & num)
w = '1';
else
w = '0';
write(1, &w, 1);
printbit = printbit >> 1;
}

}
