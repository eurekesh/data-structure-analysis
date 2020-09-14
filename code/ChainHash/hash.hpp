#pragma once

struct node
{
    int key;
    struct node* next;
};

class HashTable
{
    int tableSize;  // No. of buckets (linked lists)

    // Pointer to an array containing buckets
    node* *table;
    int numOfSearchCollision = 0;
    int numOfInsertCollision = 0;
    node* createNode(int key, node* next);
public:
    HashTable(int bsize);  // Constructor

    // inserts a key into hash table
    bool insertItem(int key);

    // hash function to map values to key
    unsigned int hashFunction(int key);

    void printTable();
    int getNumOfSearchCollision();
    int getNumOfInsertCollision();
    void resetCollisions();

    node* searchItem(int key);
};
