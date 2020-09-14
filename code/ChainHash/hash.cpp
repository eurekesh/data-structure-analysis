#include "hash.hpp"
#include <iostream>
using namespace std;

HashTable::HashTable(int size)
{
  tableSize = size;
  table = new node*[tableSize]; //set up the table
  for(int i = 0; i < tableSize; i++)
  {
    table[i] = NULL; //initialize
  }
}

node* HashTable::createNode(int key, node* next)
{
  node* newNode = new node();
  newNode->key = key;
  newNode->next = NULL;
  return newNode;
}

unsigned int HashTable::hashFunction(int key)
{
    return key % tableSize;
}

bool HashTable::insertItem(int key)
{
  unsigned int index = hashFunction(key); //get hash
  node* newNode = createNode(key, NULL); //create new node
  if(table[index] == NULL) //check if no collision has occurred in past, if so insert
  {
    table[index] = newNode;
    return true;
  }
  numOfInsertCollision++; //increment insert collision
  node* temp = table[index];
  while(temp != NULL) //search for duplicate key, if located do not insert
  {
      if(temp->key == key)
      {
          cout << "Duplicate located: " << key << endl;
          return false;
      }
      temp = temp->next;
  }
  temp = table[index];
  while(temp->next != NULL) //insert new node at end of chain
  {
      temp = temp->next;
  }
  temp->next = newNode;
  return true;
}

int HashTable::getNumOfSearchCollision() {
    return numOfSearchCollision;
}

int HashTable::getNumOfInsertCollision() {
    return numOfInsertCollision;
}

void HashTable::printTable() {
    for(int i = 0; i < tableSize; i++)
    {
        node* curr = table[i];
        cout << "Bucket No. " << i << " Contents: ";
        while(curr != NULL)
        {
            cout << curr->key << " ";
            curr = curr->next;
        }
        cout << endl;
    }
}

node *HashTable::searchItem(int key) {
    unsigned int index = hashFunction(key);
    if(table[index] != NULL)
    {
        node* temp = table[index];
        if(temp->key == key)
        {
            return temp;
        }
        //if we don't find the key right at the beginning, it's a search collision
        numOfSearchCollision++;
        while(temp != NULL) {
            if (temp->key == key) {
                return temp;
            }
            temp = temp->next;
        }
    }
    return NULL;
}

void HashTable::resetCollisions() {
    numOfSearchCollision = 0;
    numOfInsertCollision = 0;
}
