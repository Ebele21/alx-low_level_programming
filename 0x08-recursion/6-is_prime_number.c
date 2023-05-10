#include "main.h"

/**
 * is_prime_number_helper - check if number is prime
 * @n: input number
 * @i: possible factor of n
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number_helper(int n, int i)
{
if (n < 2)
return (0);
if (i * i > n)
return (1);
if (n % i == 0)
return (0);
return (is_prime_number_helper(n, i + 1));
}

/**
 * is_prime_number - check if number is prime
 * @n: input number
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
return (is_prime_number_helper(n, 2));
}
