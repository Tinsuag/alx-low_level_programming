#include "main.h"
/**
 * hashCode - returns the modulus of the hash table.
 * @key: is the value of the key variable in single dictionary segment
 * @size: is the size of the total segments availiable at the hash table.
 * Return:  returns the modulus of the hash table as an integer.
*/

int hashCode(int key, int size)
{
return (key % size);
}
