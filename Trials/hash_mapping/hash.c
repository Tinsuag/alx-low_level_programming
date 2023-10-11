#include <stdio.h>
#include <stdlib.h>

/*this will help on inserting a new key and item into the hash table.*/
hash_t* newItem(int key, int data)
{
    hash_t* result = malloc(sizeof(hash_t));
    result -> key = key;
    result -> data = data;

    return (result);
}

