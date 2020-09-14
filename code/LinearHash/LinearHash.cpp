//
// Created by Ashlyn Duy on 4/24/20.
//
#include <iostream>
#include "LinearHash.h"

int LinearHash::getInsertCollisions() {
    return insertCollisions;
}

int LinearHash::getSearchCollisions() {
    return searchCollisions;
}

LinearHash::LinearHash() {
    for(int i = 0; i < 40009; i++)
    {
        table[i] = -1; //default value when space in the array is NOT occupied
    }
}

void LinearHash::print() {
    for(int i = 0; i < 40009; i++)
    {
        std::cout << "Bucket No. " << i << ": " << table[i] << std::endl;
    }
}

void LinearHash::resetCollisions() {
    searchCollisions = 0;
    insertCollisions = 0;
}

int LinearHash::hashFunction(int key) {
    return (key % 40009);
}

void LinearHash::insert(int key) {
    int index = hashFunction(key);
    bool done = false;
    while(!done)
    {
        if(index == 40009)
        {
            index = 0;
        }
        if(table[index] == -1) //if empty space, fill it
        {
            table[index] = key;
            done = true;
            return;
        }
        insertCollisions++; //otherwise keep looking for empty space
        index++;
    }
}

void LinearHash::search(int key) {
    int index = hashFunction(key);
    bool found = false;
    while(!found)
    {
        if(index == 40009)
        {
            index = 0;
        }
        if(table[index] == key) //if we have a match return;
        {
            found = true;
            return;
        }
        searchCollisions++; //otherwise keep searching
        index++;
    }
}





