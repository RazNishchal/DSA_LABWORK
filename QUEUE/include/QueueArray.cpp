#include "QueueArray.h"
#include <iostream>

QueueArray::QueueArray(int size) {
    capacity = size;
    queue = new int[capacity];
    frontIndex = -1;
    rearIndex = -1;
}

QueueArray::~QueueArray() {
    delete[] queue;
}

void QueueArray::enqueue(int element) {
    if (isFull()) {
        std::cout << "Queue is full. Unable to enqueue." << std::endl;
    } else {
        if (isEmpty()) {
            frontIndex = 0;
        }
        rearIndex++;
        queue[rearIndex] = element;
    }
}

int QueueArray::dequeue() {
    int dequeuedElement = -1;
    if (isEmpty()) {
        std::cout << "Queue is empty. Unable to dequeue." << std::endl;
    } else {
        dequeuedElement = queue[frontIndex];
        if (frontIndex == rearIndex) {
            frontIndex = -1;
            rearIndex = -1;
        } else {
            frontIndex++;
        }
    }
    return dequeuedElement;
}

bool QueueArray::isEmpty() {
    return (frontIndex == -1 && rearIndex == -1);
}

bool QueueArray::isFull() {
    return (rearIndex== capacity - 1);
}

int QueueArray::front() {
    if (isEmpty()) {
        std::cout << "Queue is empty. No front element exists." << std::endl;
        return -1;
    } else {
        return queue[frontIndex];
    }
}

int QueueArray::back() {
    if (isEmpty()) {
        std::cout << "Queue is empty. No back element exists." << std::endl;
        return -1;
    } else {
        return queue[rearIndex];
    }
}
