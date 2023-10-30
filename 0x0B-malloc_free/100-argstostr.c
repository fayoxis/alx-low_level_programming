#include <stdlib.h>
#include "main.h"

/**
 * argstostr - Concatenates all command line
 * arguments into a single string
 * @ac: Number of command line arguments
 * @av: Array of command line arguments
 *
 * Return: A pointer to the concatenated string,
 * or NULL if memory allocation fails
 */
char *argstostr(int ac, char **av)
{
int k, v, totalLength = 0, currentIndex = 0;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
/* Calculate the total length of the concatenated string */
for (k = 0; k < ac; k++)
{
v = 0;
while (av[k][v] != '\0')
{
totalLength++;
v++;
}
}
totalLength += ac;

/* Allocate memory for the concatenated string */
str = malloc(sizeof(char) * (totalLength + 1));
if (str == NULL)
return (NULL);

/* Copy each argument into the concatenated string */
for (k = 0; k < ac; k++)
{
v = 0;
while (av[k][v] != '\0')
{
str[currentIndex] = av[k][v];
currentIndex++;
v++;
}
/* Add a newline character after each argument */
if (str[currentIndex] == '\0')
{
str[currentIndex++] = '\n';
}
}
return (str);
}
