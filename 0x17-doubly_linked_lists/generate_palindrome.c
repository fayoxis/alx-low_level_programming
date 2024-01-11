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
    int len = strlen(argument_v[1]), i, tmp;

    codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

    tmp = (len ^ 59) & 63;
    password[0] = codex[tmp];

    tmp = 0;
    for (i = 0; i < len; i++)
        tmp += argument_v[1][i];
    password[1] = codex[(tmp ^ 79) & 63];

    tmp = 1;
    for (i = 0; i < len; i++)
        tmp *= argument_v[1][i];
    password[2] = codex[(tmp ^ 85) & 63];

    tmp = 0;
    for (i = 0; i < len; i++)
    {
        if (argument_v[1][i] > tmp)
            tmp = argument_v[1][i];
    }
    srand(tmp ^ 14);
    password[3] = codex[rand() & 63];

    tmp = 0;
    for (i = 0; i < len; i++)
        tmp += (argument_v[1][i] * argument_v[1][i]);
    password[4] = codex[(tmp ^ 239) & 63];

    for (i = 0; i < argument_v[1][0]; i++)
        tmp = rand();
    password[5] = codex[(tmp ^ 229) & 63];

    password[6] = '\0';
    printf("%s", password);
    return (0);
}
