#ifndef QUEUEARRAY_H
#define QUEUEARRAY_H

class QueueArray {
    private:
        int frontIndex;
        int rearIndex;
        int capacity;
        int *queue;

    public:
        QueueArray(int size);
        ~QueueArray();

        void enqueue(int element);
        int dequeue();
        bool isEmpty();
        bool isFull();
        int front();
        int back();
};

#endif
