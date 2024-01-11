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
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(int arg_count, char *argument_v[]) {
    unsigned int i, b;
    size_t len, add;
    char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
    char p[7] = "      ";

    if (arg_count != 2) {
        printf("Correct usage: ./keygen5 username\n");
        return 1;
    }

    len = strlen(argument_v[1]);
    p[0] = l[(len ^ 59) & 63];

    for (i = 0, add = 0; i < len; i++)
        add += argument_v[1][i];
    p[1] = l[(add ^ 79) & 63];

    for (i = 0, b = 1; i < len; i++)
        b *= argument_v[1][i];
    p[2] = l[(b ^ 85) & 63];

    for (b = argument_v[1][0], i = 0; i < len; i++) {
        if ((char)b <= argument_v[1][i])
            b = argument_v[1][i];
    }
    srand(b ^ 14);
    p[3] = l[rand() & 63];

    for (b = 0, i = 0; i < len; i++)
        b += argument_v[1][i] * argument_v[1][i];
    p[4] = l[(b ^ 239) & 63];

    for (b = 0, i = 0; (char)i < argument_v[1][0]; i++)
        b = rand();
    p[5] = l[(b ^ 229) & 63];

    printf("%s\n", p);
    return 0;
}
