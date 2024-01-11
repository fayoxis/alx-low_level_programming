#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int findLargest(char *str, int len) {
int largest = *str;
int i;

for (i = 1; i < len; i++) {
if (str[i] > largest) {
largest = str[i];
}
}

srand(largest ^ 14);
return ((rand() & 63));
}

int multiplyChars(char *str, int len) {
int result = 0;
int i;
for (i = 0; i < len; i++) {
result += str[i] * str[i];
}

return ((result ^ 239) & 63);
}

int generateRandomChar(char *str) {
int randomChar = 0;
int i;

for (i = 0; i < *str; i++) {
randomChar = rand();
}

return ((randomChar ^ 229) & 63);
}

int main(int argc, char **argv) {
char keygen[7];
int len, ch, vch;
long alph[] = {
0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
0x723161513346655a, 0x6b756f494b646850
};

(void)argc;

len = 0;
while (argv[1][len]) {
len++;
}

ch = vch = 0;
while (vch < len) {
ch += argv[1][vch];
vch++;
}
keygen[0] = ((char *)alph)[(len ^ 59) & 63];
keygen[1] = ((char *)alph)[(ch ^ 79) & 63];

ch = 1;
vch = 0;
while (vch < len) {
ch = argv[1][vch] * ch;
vch++;
    }
keygen[2] = ((char *)alph)[(ch ^ 85) & 63];

keygen[3] = ((char *)alph)[findLargest(argv[1], len)];
keygen[4] = ((char *)alph)[multiplyChars(argv[1], len)];
keygen[5] = ((char *)alph)[generateRandomChar(argv[1])];
keygen[6] = '\0';

ch = 0;
while (keygen[ch]) {
printf("%c", keygen[ch]);
ch++;
}
return (0);
}
