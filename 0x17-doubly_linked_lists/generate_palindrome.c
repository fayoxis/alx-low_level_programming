#include <stdio.h>

char is_palindrome(unsigned int num);

/**
 * main - it is an entry point to find palindrome program
 *
 * Return: always returns  0
 */
int main(void)
{
unsigned int d1 = 100, d2 = 100, temp, max = 0;

while (d1 <= 999)
{
while (d2 <= 999)
{
temp = d1 * d2;
if (is_palindrome(temp))
max = (temp > max) ? temp : max;
d2++;
}
d1++;
d2 = 100;
}

printf("the Largest palindrome of 3 digit numbers is: %d\n", max);

return (0);
}

char is_palindrome(char num)
{
char reverse = 0, rem = 0, n = num;
for (n = num; n != 0; n /= 10)
{
rem = n % 10;
reverse = reverse * 10 + rem;
}

if (reverse == num)
return (1);
return (0);
}
