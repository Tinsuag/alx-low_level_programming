#include <Stdliv.h>
#include <stdarg.h>
/***
 *sum_them_all(): the function returns the sum of n numbers
 *@n:-is an arguement implieng the no of arguements
 *@x:-is the returned summ amount.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	va_start(args,n);
	int i;
	for (i=0; i < n ; n++)
	{
		int x = va_arg(args, int);
	}
	return (x);
}

