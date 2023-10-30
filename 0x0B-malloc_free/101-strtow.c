#include <stdlib.h>
#include "main.h"

/**
 * count_words - Helper function to count the number of words in a string.
 * @s: String to evaluate.
 *
 * Return: Number of words.
 */
int count_words(char *s)
{
int flag, c, w;
flag = 0;
w = 0;
for (c = 0; s[c] != '\0'; c++)
{
if (s[c] == ' ')
flag = 0;
else if (flag == 0)
{
flag = 1;
w++;
}
}

return (w);
}

/**
 * strtow - Splits a string into words.
 * @str: String to split.
 *
 * Return: Pointer to an array of strings (Success) or NULL (Error).
 */
char **strtow(char *str)
{
char **matrix, *tmp;
int v, k = 0, len = 0, words, c = 0, start, end;

while (*(str + len))
len++;
words = count_words(str);
if (words == 0)
return (NULL);

matrix = (char **)malloc(sizeof(char *) * (words + 1));
if (matrix == NULL)
return (NULL);

for (v = 0; v <= len; v++)
{
if (str[v] == ' ' || str[v] == '\0')
{
if (c)
{
end = v;
tmp = (char *)malloc(sizeof(char) * (c + 1));
if (tmp == NULL)
return (NULL);
while (start < end)
*tmp++ = str[start++];
*tmp = '\0';
matrix[k] = tmp - c;
k++;
c = 0;
}
}
else if (c++ == 0)
start = v;
}
matrix[k] = NULL;
return (matrix);
}
