#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two integers.
 * @a: First integer
 * @b: Second integer
 * Return: Sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns the difference of two integers.
 * @a: First integer.
 * @b: Second integer.
 * Return: Difference of the two integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns the product of two integers.
 * @a: First integer
 * @b: Second integer
 * Return: Product of two integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the division of two integers.
 * @a: First integer
 * @b: Second integer
 * Return: The quotient of two integers
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the remainder of the division of two integers.
 * @a: First integer
 * @b: Second integer
 * Return: The remainder of the division of two integers.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
