int div(int a, int b);
int sub(int a, int b);
int add(int a, int b);
int mul(int a, int b);
int mod(int a, int b);

/**
 * div - divides two integers
 * @a: the dividend
 * @b: the divisor
 * Return: the quotient
 */

int div(int a, int b)
{
	return (a / b);
}

/**
 * sub - subtracts two integers
 * @a: the minuend
 * @b: the subtrahend
 * Return: the difference
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 * add - adds two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the sum
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * mul - multiplies two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the product
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * mod - finds the modulus of two integers
 * @a: the dividend
 * @b: the divisor
 * Return: the modulus
 */

int mod(int a, int b)
{
	return (a % b);
}

