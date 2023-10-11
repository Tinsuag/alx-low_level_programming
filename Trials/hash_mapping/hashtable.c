#include "main.h"

hashTable_t* newHashTable(int size)
{
    hashTable_t* result = malloc(sizeof(hashTable_t));
    result -> count = 0;
    result -> size = size;
    result -> array = malloc(sizeof(hash_t)*size);
    if(result == NULL)
    {
        printf("hash table allocation eror.\n");
    }
}

void freeHashTable(hashTable_t* table)
{
    if(table != NULL)
    {
        for(int i = 0; i < table -> size; i++)
        {
            size_t* item = table -> array[i];
            if(item != NULL)
                freeItem(item);
        }

        free(table -> array);
        free(table);
    }
}