#include "variadic_functions.h"

/**
 * sum_all returns the sum of all it's parameters
 * @n: counts number of parameters
 *
 * Return: sum of tis parameters
 */

int sum_all(unsigned int n, ...)
{
	va_list vag;
	int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(vag, n);

	for (i = 0; i < n; i++)
		sum += va_arg(vqg, in);
	va_end(vag);

	return (sum);
}
