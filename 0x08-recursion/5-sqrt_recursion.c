#include "main.h"

/**
 * _sqrt_recursion_helper - calculate natural square root
 * @n: input number
 * @i: possible square root
 *
 * Return: square root or -1 if not found
 */
int _sqrt_recursion_helper(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (_sqrt_recursion_helper(n, i + 1));
}

/**
 * _sqrt_recursion - calculate natural square root
 * @n: input number
 *
 * Return: square root or -1 if not found
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt_recursion_helper(n, 0));
}
