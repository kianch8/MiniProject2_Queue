#include "Queue.h"
#include <stdexcept>

Queue::Queue(int cap): front(0), last(-1), num(0), max(cap)
{
    data = new int[max];
}

// deallocate memory
Queue::~Queue() 
{
    delete[] data;
}

void Queue::enqueue(int item) 
{
    if (isFull()) 
    {
        throw std::overflow_error("Queue is full. Cannot enqueue.");
    }

    last = (last + 1) % max;
    data[last] = item;
    num++;
}

int Queue::dequeue() 
{
    if (isEmpty()) 
    {
        throw std::underflow_error("Queue is empty. Cannot dequeue.");
    }

    int item = data[front];
    front = (front + 1) % max;
    num--;
    return item;
}

int Queue::peek() const 
{
    if (isEmpty()) 
    {
        throw std::underflow_error("Queue is empty. Cannot peek.");
    }

    return data[front];
}

bool Queue::isEmpty() const 
{
    return num == 0;
}

bool Queue::isFull() const 
{
    return num == max;
}

int Queue::size() const 
{
    return num;
}

void Queue::clear() 
{
    front = 0;
    last = -1;
    num = 0;
}

void Queue::print() const 
{
    if (isEmpty()) {
        std::cout << "Queue is empty.\n";
        return;
    }

    std::cout << "Current Queue: ";

    for (int i = 0; i < num; i++) {
        int index = (front + i) % max;
        std::cout << data[index] << " ";
    }

    std::cout << "\n";
}