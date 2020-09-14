//
// Created by Ashlyn Duy on 4/24/20.
//
#include <iostream>
#include "QuadraticHash.h"

int QuadraticHash::getInsertCollisions() {
    return insertCollisions;
}

int QuadraticHash::getSearchCollisions() {
    return searchCollisions;
}

QuadraticHash::QuadraticHash() {
    for(int i = 0; i < 40009; i++)
    {
        table[i] = -1; //default value when space in the array is NOT occupied
    }
}

void QuadraticHash::print() {
    for(int i = 0; i < 40009; i++)
    {
        std::cout << "Bucket No. " << i << ": " << table[i] << std::endl;
    }
}

void QuadraticHash::resetCollisions() {
    searchCollisions = 0;
    insertCollisions = 0;
}

unsigned int QuadraticHash::hashFunction(int key) {
    return (key % 40009);
}

void QuadraticHash::insert(int key) {
    unsigned int index = hashFunction(key);
    bool done = false;
    int counter = 1; //quadratic probe counter
    while(!done)
    {
//        while(index >= 40009) //take it down some notches
//        {
//            index -= 40009;
//        }
        if(table[index] == -1) //if empty space, fill it
        {
            table[index] = key;
            done = true;
            return;
        }
        insertCollisions++; //otherwise keep looking for empty space
        index = (index + (counter * counter)) % 40009; //faster than pow!
        counter++;
    }
}

void QuadraticHash::search(int key) {
    unsigned int index = hashFunction(key);
    bool found = false;
    int counter = 1;
    while(!found)
    {
        while(index >= 40009)
        {
            index -= 40009;
        }
        if(table[index] == key) //if we have a match return;
        {
            found = true;
            return;
        }
        searchCollisions++; //otherwise keep searching
        index = index + (counter * counter); //faster than pow!
        counter++;
    }
}





