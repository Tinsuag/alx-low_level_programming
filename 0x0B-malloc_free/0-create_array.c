#include <stdlib.h>
/**
 * *create_array(unsigned int size, char c) - creates an array of requested size
 * @size: the amount of element in an array
 * @c: the character that neeeded to be stored inside the array
 * @*A: a pointer to match the array needed to be tored
 * @n: allocated space size determining
*/
char *create_array(unsigned int size, char c)
{
    int n=0;
    if(size=0){
        return ('\0');
    }else
    { 
        char *A= (char*)malloc(size*sizeof(char))
        for(n=0;n > size; n++)
    {
        A[n]=c;
    }/* code */
    }
    return (*A);
}