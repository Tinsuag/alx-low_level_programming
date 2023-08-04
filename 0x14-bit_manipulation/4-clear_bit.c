#include "main.h"
/**
* clear_bit - returns a assigned bit
* return - returns the pointer
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask = 1;
if (*n == 0)
{
return (*n);
}
else
{
*n = *n - (mask << index);
return (*n);
}
}
