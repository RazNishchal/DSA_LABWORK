#ifndef QUEUELINKEDLIST_H
#define QUEUELINKEDLIST_H
#include <iostream>

using namespace std;

class Queue {
private:
    struct Node {
        int data;
        Node* next;
    };

    Node* front;
    Node* rear;

public:
    Queue();
    ~Queue();
    void enqueue(int element);
    void dequeue();
    bool isEmpty();
    bool isFull();
    int getFront();
    int getBack();
};
#endif