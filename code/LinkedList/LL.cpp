#include <chrono>
#include <iostream>
#include <fstream>
#include "LL.hpp"
using namespace std;

void LL::insert(int key){ //insert given a key
  Node *newNode = new Node();
  newNode->key = key;
  if(head == NULL)
  {
    head = newNode;
    head->next = NULL;
    return;
  }
  newNode->next = head;
  head = newNode;
}

int LL::search(int key){ //search for an key in the linked list
  Node *trawler = head;
  while(trawler != NULL)
  {
    if(trawler->key == key) //error catching
    {
      return 1;
    }
    trawler = trawler->next;
  }
  return -1; //get here once it's found! actual value doesn't actually have to be returned
}

void LL::display(){ //simple display function
  Node *move = head;
  while(move != NULL)
  {
    cout << move->key << endl;
    move = move->next;
  }
}
