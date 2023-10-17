#include "main.h"

int ht_isFull(hashTable_t *table)
{
    return table -> count == table -> size;
}
