/*
 * File: 103-keygen.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Generates and prints passwords for the crackme5 executable.
 * @arg_count: The number of arguments supplied to the program.
 * @argument_v: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) arg_count, char *argument_v[])
{
    char password[7], *codex;
    int input_length = strlen(argument_v[1]);
    int i, index;

    codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

    index = (input_length ^ 59) & 63;
    password[0] = codex[index];

    index = 0;
    for (i = 0; i < input_length; i++)
        index += argument_v[1][i];
    password[1] = codex[(index ^ 79) & 63];

    index = 1;
    for (i = 0; i < input_length; i++)
        index *= argument_v[1][i];
    password[2] = codex[(index ^ 85) & 63];

    index = 0;
    for (i = 0; i < input_length; i++)
    {
        if (argument_v[1][i] > index)
            index = argument_v[1][i];
    }
    srand(index ^ 14);
    password[3] = codex[rand() & 63];

    index = 0;
    for (i = 0; i < input_length; i++)
        index += (argument_v[1][i] * argument_v[1][i]);
    password[4] = codex[(index ^ 239) & 63];

    index = 0;
    for (i = 0; i < argument_v[1][0]; i++)
    {
        srand(index ^ 14);
        index = rand();
    }
    password[5] = codex[index & 63];

    password[6] = '\0';
    printf("%s", password);

    return 0;
}
