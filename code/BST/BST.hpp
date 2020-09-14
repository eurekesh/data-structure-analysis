#pragma once

struct Node{
    int key;
    Node* left;
    Node* right;
};

class BST{
    private:
        Node* root = NULL;
        Node* createNode(int data);
        Node* addNodeHelper(Node*, int);
        void printTreeHelper(Node*);
        Node* searchKeyHelper(Node*, int);

    public:
        void insert(int);
        bool search(int);
        void printTree();
        BST();
        BST(int data);

};
