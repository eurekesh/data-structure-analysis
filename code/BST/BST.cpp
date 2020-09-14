#include <iostream>
#include "BST.hpp"
using namespace std;

Node* BST::createNode(int data)
{
    Node* newNode = new Node;
    newNode->key = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

BST::BST()
{
}

BST::BST(int data)
{
    root = createNode(data);
}

Node* BST::addNodeHelper(Node* currNode, int data)
{
    if(currNode == NULL){
        return createNode(data);
    }
    else if(currNode->key < data){
        currNode->right = addNodeHelper(currNode->right,data);
    }
    else if(currNode->key >= data){ //handle duplicates
        currNode->left = addNodeHelper(currNode->left,data);
    }
    return currNode;

}

void BST::insert(int data)
{
    root = addNodeHelper(root, data);
}

void BST::printTreeHelper(Node* currNode){
     if(currNode)
     {
        printTreeHelper(currNode->left);
        printTreeHelper(currNode->right);
        cout << " "<< currNode->key;
     }
 }

void BST::printTree(){
     printTreeHelper(root);
     cout<<endl;
}

Node* BST::searchKeyHelper(Node* currNode, int data){
    if(currNode == NULL)
        return NULL;

    if(currNode->key == data)
        return currNode;

    if(currNode->key > data)
        return searchKeyHelper(currNode->left, data);

    return searchKeyHelper (currNode->right, data);
}

// This function will return whether a key is in the tree
bool BST::search(int key){
    Node* tree = searchKeyHelper(root, key);
    if(tree != NULL) {
        return true;
    }
    return false;
}
