#include "QueueLinkedlist.h"

Queue::Queue() {
    front = nullptr;
    rear = nullptr;
}

Queue::~Queue() {
    while (front != nullptr) {
        Node* temp = front;
        front = front->next;
        delete temp;
    }
    rear = nullptr;
}

void Queue::enqueue(int element) {
    Node* temp = new Node;
    temp->data = element;
    temp->next = nullptr;

    if (isEmpty()) {
        front = rear = temp;
    }
    else {
        rear->next = temp;
        rear = temp;
    }
}

void Queue::dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty!" << endl;
    }
    else {
        Node* temp = front;
        front = front->next;
        if (front == nullptr) {
            rear = nullptr;
        }
        delete temp;
        
    }
    }

bool Queue::isEmpty() {
    return (front == nullptr);
}

bool Queue::isFull() {
    return (rear->next==nullptr);
}

int Queue::getFront() {
    if (isEmpty()) {
        cout << "Queue is empty!" << endl;
        return -1;
    }
    else {
        return front->data;
    }
}

int Queue::getBack() {
    if (isEmpty()) {
        cout << "Queue is empty!" << endl;
        return -1;
    }
    else {
        return rear->data;
    }
}
