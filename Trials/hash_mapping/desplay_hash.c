#include "main.h"

void ht_desplay(hashTable_t* table)
{
    for(int i = 0; i < table -> size; i++)
    {
        if(ht_hasItem(table, i))
        {
            item_t* item = table -> array[i];
            printf("%d)(%d,%d)\n", i, item -> key, item -> data);
        }
        else
        {
            printf("%d) empty\n", i);
        }
    }
}
