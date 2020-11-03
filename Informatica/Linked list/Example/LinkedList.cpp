//
// Created by aureb on 2/10/2020.
//
#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList() {
    head = nullptr;
    list_size = 0;
}

Node *LinkedList::getNode(int pos) {

    int p = 0;
    Node *aux = head;
    while (p != pos - 1 && aux != nullptr) {
        aux = aux->getNext();
        p++;
    }

    if (aux == nullptr) {
        throw 404;
    }
    return aux;
}

void LinkedList::insert(int pos, int dato) {

    Node *aux;

    if (pos == 0) {
        aux = new Node;
        aux->setNext(head);
        aux->setData(dato);
        head = aux;
        return;
    }

    aux = getNode(pos - 1);
    getNode(pos);
    Node *newNode = new Node;

    newNode->setNext(aux->getNext());

    aux->setNext(newNode);

    newNode->setData(dato);
}

int LinkedList::get(int pos) {
    Node *aux = getNode(pos);
    return aux->getData();
}

void LinkedList::replace(int pos, int dato) {
    Node *aux = getNode(pos - 1);

    aux->setData(dato);
}

bool LinkedList::empty() {
    return (head == nullptr);
}

void LinkedList::erase(int pos) {

    if(head == nullptr){
        throw 404;
    }

    if (pos == 0) {
        Node *toDelete = head;
        head = head->getNext();
        delete toDelete;
        return;
    }

    Node *aux = getNode(pos - 1);
    Node *toDelete = aux->getNext();
    if (toDelete == nullptr) {
        throw 404;
    }
    aux->setNext(toDelete->getNext());
    delete toDelete;
}



