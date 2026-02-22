#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>

class Queue
{
    private:
        int* data;          // Pointer to dynamic array
        int front;          // Index of front element
        int last;           // Index of last element
        int num;            // Number of elements in queue
        int max;            // Maximum capacity

    public:
        Queue (int cap);

        ~Queue();

        // Adds a new element to the back (rear) of the queue
        void enqueue(int item);

        // Removes and returns the element at the front of the queue
        int dequeue();

        // Returns the element at the front without removing it
        int peek() const;

        // Returns true if the queue has no elements; otherwise false
        bool isEmpty() const;

        // Returns true if the queue has reached its maximum size
        bool isFull() const;

        // Returns the number of elements currently stored in the queue
        int size() const;

        // Removes all elements from the queue
        void clear();

        void print() const;

};

#endif