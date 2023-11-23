#include <stdlib.h>
#include <stdio.h>
#include "main.h"


/**
* _strlen - Returns length(valve) of the  string
* @str: String to count
*
* Return: return the String length
*/
int _strlen(const char *str)
{
unsigned int w = 0;
while (str[w] != '\0')
w++;
return (w);
}


/**
* binary_to_uint - Convert the binary n to an unsigned interger
* @bin: binary string is to be converted
*
* Return: The positive n converted from binary
*/
unsigned int binary_to_uint(const char *bin)
{
unsigned int len = 0, count = 0, sum = 0;

if (bin == NULL)
return (0);
len = _strlen(bin);
while (len--)
{
if (bin[len] != '0' && bin[len] != '1')
return (0);
if (bin[len] == '1')
sum += 1 << count;
count++;
}
return (sum);
}
