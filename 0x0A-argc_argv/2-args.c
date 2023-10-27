#include "main.h"
#include <stdio.h>

/**
  * main - print_arguments Prints all the arguments
  * passed to the program
  * @A_count: argument count
  * @A_vector: argument vector
  * Return: Always zero
  */
int main(int A_count, char *A_vector[])
{
int k;
for (k = 0; k < A_count; k++)
{
printf("%s\n", A_vector[k]);
}
return (0);
}
