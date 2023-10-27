#include <stdio.h>
#include "main.h"
#include <stdlib.h>


/**
 * main - prints the minimum number of coins required
 * to make change for a given amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
int amount, numCoins;
unsigned long i;
int coins[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}
amount = atoi(argv[1]);
numCoins = 0;
if (amount < 0)
{
printf("0\n");
return (0);
}
for (i = 0; i < sizeof(coins) /
sizeof(coins[0]) && amount > 0; i++)
{
while (amount >= coins[i])
{
numCoins++;
amount -= coins[i];
}
}
printf("%d\n", numCoins);
return (0);
}
