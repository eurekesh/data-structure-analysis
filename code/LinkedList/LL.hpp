#pragma once

struct Node{
  int key;
  Node *next;
};

class LL {
  private:
    Node *head;

  public:
    LL(){head = NULL;}
    void insert(int key);
    int search(int key);
    void display();

};
