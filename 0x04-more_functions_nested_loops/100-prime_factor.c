#include <stdio.h>
/**
 * main - prints prime factors of 612852475143
 *
 * Return: Always 0 (Success)
 */
 
int isprime(long n)
{
	long i;
	long i_max = n / 2;

	for (i = 2; i < i_max; ++i)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}

long largest_prime_factor(long n)
{
	long i = 2;

	while (!isprime(n))
	{
		while (n % i || !isprime(i))
			++i;
		n /= i;
	}
	return (n);
}

int main(void)
{
	printf("%ld\n", largest_prime_factor(612852475143));
	return (0);
}
