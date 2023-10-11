#ifndef MAIN_H
#define MAIN_H

#include<stdio.h>
#include<stdlib.h>

//this is the single node description of the dectionary deployed
typedef struct item
{
    
    int data;
    int key;
} hash_t;

//this is the hash table
typedef struct hashTable
{
    int count;
    int size;

    hash_t** array;
} hashTable_t;

void ht_desplay(hashTable_t* table);
int ht_hasItem(hashTable_t* table, int idx);
hash_t* newItem(int key, int data);
hashTable_t* newHashTable(int size);
void freeHashTable(hashTable_t* table);



#endif /* MAIN_H */
