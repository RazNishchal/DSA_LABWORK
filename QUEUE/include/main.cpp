#include "QueueArray.h"
#include "QueueLinkedlist.h"
#include <iostream>
using namespace std;

int main() { 
    QueueArray queue(5);
     Queue q;
   
    

    cout<<"OUTPUT FOR QUEUE USING ARRAY"<<endl;
    cout << "Is queue empty: " << queue.isEmpty() << endl;

    queue.enqueue(11);
    queue.enqueue(12);
    queue.enqueue(13);
    queue.enqueue(14);
    queue.enqueue(15);
    
    cout << "Is queue full: " << queue.isFull() <<endl;

    cout << "Front element: " << queue.front() <<endl;
    cout << "Back element: " << queue.back() <<endl;

    cout << "Dequeued element: " << queue.dequeue() <<endl;
    cout << "Dequeued element: " << queue.dequeue() <<endl;

    cout << "Front element: " << queue.front() <<endl;
    cout << "Back element: " << queue.back() <<endl;

    queue.enqueue(9);
    queue.enqueue(10);

    cout << "Is queue full: " << queue.isFull() <<endl;

    cout << "Front element: " << queue.front() <<endl;
    cout << "Back element: " << queue.back()<<endl;
     cout<<""<<endl;
    cout<<"OUTPUT FOR QUEUE USING LINKED LIST";
    

    //FOR QUEUE USING LINKEDLIST

 
    
    // Test enqueue operation
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    

       // Test getFront and getBack operation
    cout << "Front element: " << q.getFront() << endl;
    cout << "Rear element: " << q.getBack() << endl;
     
    // Test dequeue operation
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    // Test getFront and getBack operation
    cout << "Front element: " << q.getFront() << endl;
    cout << "Rear element: " << q.getBack() << endl;
     
      q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);

    // Test isEmpty operation
    if (q.isEmpty()) {
        cout << "Queue is empty!" << endl;
    }
    else {
        cout << "Queue is not empty!" << endl;
    }

    // Test isFull operation
    if (q.isFull()) {
        cout << "Queue is full!" << endl;
    }
    else {
        cout << "Queue is not full!" << endl;
    }

    return 0;
}