#include "main.h"
/**
* is_prime_number - Checks if a number is div
* @n: number
* * Return: 1 if n is prime. 0 otherwise
*/
int is_prime_number(int n)
{
int start = n / 2;
if (n <= 1)
return (0);
return (is_prime(n, start));
}
/**
* is_prime - Checks if a number is
* @n: the number used
* @start: The number to be che* * *
* Return: 1 if n is prime. 0 otherwise
*/
int is_prime(int n, int start)
{
if (start <= 1)
return (1);
else if (n % start == 0)
return (0);
return (is_prime(n, start - 1));
}
