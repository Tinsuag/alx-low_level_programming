#include <stdarg.h>
#include <stdio.h>
/**
 *sum_them_all - sum of all its parameters
 *@n:-is an arguement implieng the no of arguements
 *Return: sum of value
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int x = 0;

	va_list args;

	if (n == 0)
	{
		return (x);
	}
	va_start(args, n);

	for (i = 0 ; i < n ; i++)
	{
		x += va_arg(args, int);
	}
	va_end(args);
	return (x);
}
