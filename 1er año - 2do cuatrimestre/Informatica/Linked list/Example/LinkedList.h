//
// Created by aureb on 2/10/2020.
//

#ifndef EXAMPLE_LINKEDLIST_H
#define EXAMPLE_LINKEDLIST_H

#include "Node.h"

class LinkedList{
private:
    Node *head;
    Node* getNode(int pos);
    unsigned int list_size;
public:
    LinkedList();
    void insert(int pos, int dato);
    int get(int pos);
    void replace(int pos, int dato);
    bool empty();
    void erase(int pos);
    int find (int dato);
    unsigned int size(){
        return list_size;
    }
};


#endif //EXAMPLE_LINKEDLIST_H
