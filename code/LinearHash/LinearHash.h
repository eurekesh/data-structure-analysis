#pragma once


class LinearHash {
private:
    int *table = new int[40009];
    int searchCollisions = 0;
    int insertCollisions = 0;
public:
    LinearHash();
    void insert(int key);
    int hashFunction(int key);
    void search(int key);
    void print();
    void resetCollisions();
    int getSearchCollisions();
    int getInsertCollisions();
};

