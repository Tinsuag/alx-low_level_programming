#include "main.h"
/**
 * void swap_int(int *a, int *b) - used to swap two integers through the use of pointers
 * @a:number one integer
 * @b:number twi ubteger
 * @c:binterchanging variable
 * Return: always 0.
*/

void swap_int(int *a, int *b)
{
    int c;
    c=a;
    *a=*b;
    *b=c;
}