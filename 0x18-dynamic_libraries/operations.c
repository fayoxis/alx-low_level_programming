int add(int k, int j);
int sub(int i, int k);
int mul(int i, int j);
int div(int k, int j);
int mod(int j, int ki);

/**
 * add - it actually adds two integers
 * @k: this is the first integer to be added
 * @j: it is the second integer to be added
 * Return: return the sum
 */
int add(int k, int j)
{
return (k + j);
}

/**
 * sub - it is the subtracts two integers
 * @i: it is the first integer to be subtracted from
 * @k: it is the second integer to be subtracted from
 * Return: return the difference
 */
int sub(int i, int k)
{
return (i - k);
}

/**
 * mul - it multiplies two integers
 * @i: this is the first integer to  be multiplied
 * @j: this is the second integer to  be multiplied
 * Return: return the product
 */
int div(int i, int j)
{
return (i * j);
}

/**
 * div - it is to divides two integers
 * @k: thi sis the dividend
 * @j: this is the divisor
 * Return: return the quotient
 */
int div(int k, int j)
{
    return (k / j);
}

/**
 * mod - it finds the modulus of two integers
 * @j: this is the dividend
 * @ki: thi is the divisor
 * Return: returns  the modulus
 */
int mod(int j, int ki)
{
return (j % ki);
}
