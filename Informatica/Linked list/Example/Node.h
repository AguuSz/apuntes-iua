//
// Created by aureb on 2/10/2020.
//

#ifndef EXAMPLE_NODE_H
#define EXAMPLE_NODE_H



class Node {
private:
    int data;
    Node *next;

public:
    int getData(){
        return data;
    }
    void setData(int d){
        data = d;
    }

    Node *getNext() {
        return next;
    }
    void setNext(Node *n){
        next = n;
    }
};


#endif //EXAMPLE_NODE_H
