#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int bytes, k;
unsigned char *arr;

if (argc != 2)
{
printf("Error\n");
return (1);
}

bytes = atoi(argv[1]);

if (bytes <= 0)
{
printf("Error\n");
return (2);
}

arr = (char *)main;

for (k = 0; k < bytes; k++)
{
if (k == bytes - 1)
{
printf("%02hhx\n", arr[k]);
break;
}
printf("%02hhx ", arr[k]);
}
return (0);
}
