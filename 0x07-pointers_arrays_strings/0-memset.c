#include "main.h"
/**
 *_memset - prints the filling element
 * @s: target
 * @b: constant byte
 * @n: number of bytes
 * Return: returns the value of target 
*/
char *_memset(char *s, char b, unsigned int n)
{
	while(n)
	{
		s[n-1]=b;
		s--;
	}
	return (s);
}
