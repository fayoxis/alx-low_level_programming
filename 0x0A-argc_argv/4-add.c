#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the sum of positive
 * numbers passed as arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always zero
 */
int main(int argc, char *argv[])
{
int i;
unsigned int j, sum = 0;
char *num_str;
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
num_str = argv[i];
for (j = 0; num_str[j] != '\0'; j++)
{
if (num_str[j] < '0' || num_str[j] > '9')
{
printf("Error\n");
return (1);
}
}
sum += atoi(num_str);
}
printf("%d\n", sum);
}
else
{
printf("0\n");
}
return (0);
}
