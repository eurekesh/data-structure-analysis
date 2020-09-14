#pragma once


class QuadraticHash {
private:
    int *table = new int[40009];
    int searchCollisions = 0;
    int insertCollisions = 0;
public:
    QuadraticHash();
    void insert(int key);
    unsigned int hashFunction(int key);
    void search(int key);
    void print();
    void resetCollisions();
    int getSearchCollisions();
    int getInsertCollisions();
};

