#include "main_h"

int ht_hasItem(hashTable_t* table, int idx)
{
    return (table -> array[idx] != NULL);
}
