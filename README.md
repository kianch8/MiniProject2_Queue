# MiniProject02 - Queue (Circular Array Implementation)
## EECE2140

## Description
This project implements a reusable Queue data structure in C++ using:
- Header File (`Queue.h`)       <!-- class declaration and public API   -->
- Source File (`Queue.cpp`)     <!-- function implementations           -->
- Driver (`main.cpp`)           <!-- interactive terminal for user      -->

The queue uses a fixed-size circular array.
The queue supports standard functions such as enqueue, dequeue, peek, size check, print, and clearing the queue.

## Class Features  
- enqueue()     <!-- Adds a new element to the back (rear) of the queue             -->
- dequeue()     <!-- Removes and returns the element at the front of the queue      -->
- peek()        <!-- Returns the element at the front without removing it           -->
- isEmpty()     <!-- Returns true if the queue has no elements; otherwise false     -->
- isFull()      <!-- Returns true if the queue has reached its maximum size         -->
- size()        <!-- Returns the number of elements currently stored in the queue   -->
- clear()       <!-- Removes all elements from the queue                            -->

## Debug and Compile (using g++)
`g++ Queue.cpp main.cpp -o Queue`

## Run Program
`./queue`


## Example Usage
Enter queue capacity: 3

------------------
Queue Capacity: 3
------------------
1. Enqueue
2. Dequeue
3. Peek
4. Size
5. Print queue
6. Clear queue
7. Exit
------------------
Select option: 1
Enter value to enqueue: 10
The value [10] has been enqueued succesfully.

------------------
Queue Capacity: 3
------------------
1. Enqueue
2. Dequeue
3. Peek
4. Size
5. Print queue
6. Clear queue
7. Exit
------------------
Select option: 5
Current Queue: 10 

------------------
Queue Capacity: 3
------------------
1. Enqueue
2. Dequeue
3. Peek
4. Size
5. Print queue
6. Clear queue
7. Exit
------------------
Select option: 2
The value [10] has been dequeued succesfully.

------------------
Queue Capacity: 3
------------------
1. Enqueue
2. Dequeue
3. Peek
4. Size
5. Print queue
6. Clear queue
7. Exit
------------------
Select option: 7
Exiting program. See you next time!