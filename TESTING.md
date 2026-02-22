# Queue Testing Notes

## 1. Enqueue Until Full

**Testing Steps**

1. Enter value *5* for queue capacity.
2. Continuously select option 1 for enqueue, and repeat enqueue for 5 elements: *10, 20, 30, 40, 50*.  
3. Attempt to enqueue a 6th element: 60.

**Expected Behavior:**

- The first 5 enqueues are succesful.  
- The 6th enqueue returns an error `std::overflow_error` with a message implying that the queue is full, and cannot enqueue.

**Observed Behavior:**
Queue after 5 enqueues: 10 20 30 40 50
Attempt to enqueue 6th element: `Error: Queue is full. Cannot enqueue.`

----------

## 2. Dequeue Until Empty

**Testing Steps**

1. Enter value *5* for queue capacity.
2. Continuously select option 1 for enqueue, and repeat enqueue for 5 elements: *10, 20, 30, 40, 50*.  
3. Now select option 2 for dequeue, and repeat 5 times until the queue is empty.

**Expected Behavior:**

- The first 5 enqueues are succesful.  
- The 5 dequeues are succesful, outputting values of the dequeued elements per input: *10, 20, 30, 40, 50*
- The 6th dequeue returns an error `std::underflow_error` with a message implying that the queue is empty, and cannot dequeue.

**Observed Behavior:**
Queue after 5 enqueues: 10 20 30 40 50
`The value [10] has been dequeued succesfully.`
`The value [20] has been dequeued succesfully.`
`The value [30] has been dequeued succesfully.`
`The value [40] has been dequeued succesfully.`
`The value [50] has been dequeued succesfully.`
Attempt to dequeue 6th element: `Error: Queue is empty. Cannot dequeue.`

----------

## 3. Wrap-around test (Circular Indexing)

**Testing Steps**

1. Enter value *5* for queue capacity.
2. Continuously select option 1 for enqueue, and repeat enqueue for 5 elements: *10, 20, 30, 40, 50*.  
3. Select option 2 for dequeue, and repeat twice (removes 10 and 20)
4. Select option 1 for enqueue, and repeat enqueue for 2 elements: *60, 70*.
5. Select option 5 for print queue.

**Expected Behavior:**

- The first 5 enqueues are succesful. (10, 20, 30, 40, 50)
- The 2 dequeues are succesful, outputting values of the dequeued elements per input: *10, 20*.
- The next 2 enqueues are succesful. (60 and 70)
- The program now ouptuts a wrap-around queue order: `30 40 50 60 70`.

**Observed Behavior:**
Queue after 5 enqueues: 10 20 30 40 50
`The value [10] has been dequeued succesfully.`
`The value [20] has been dequeued succesfully.`
`The value [60] has been enqueued succesfully.`
`The value [70] has been enqueued succesfully.`
Print queue: `Current Queue: 30 40 50 60 70`

----------

## 4. Mixed Operations Sequence Test

**Testing Steps**

1. Enter value *5* for queue capacity.
2. Continuously select option 1 for enqueue, and repeat enqueue for 3 elements: *10, 20, 30*.
3. Select option 3 to peak the first element of the queue.
4. Select option 2 for dequeue, and dequeue only the first element (removes 10)
5. Select option 4 to view the size of the queue.
6. Select option 1 for enqueue, and repeat enqueue for 3 elements: *1 2 3*.
7. Select option 5 to print the queue.
8. Select option 6 to clear the queue.
9. Select option 5 to print the queue.

**Expected Behavior:**

- The first 3 enqueues are succesful. (10, 20, 30)
- The first element of the queue is displayed accurately: `10`.
- The dequeues is succesful, outputting the value `10`.
- The size of the queue is now updated: `2`.
- The next 2 enqueues are succesful. (1, 2, 3)
- The program prints the updated queue: `20 30 1 2 3`
- The program clears the queue, and prompts the user
- The program now prints a message informing that the queue is empty. `Queue is empty.`

**Observed Behavior:**
`The value [10] has been enqueued succesfully.`
`The value [20] has been enqueued succesfully.`
`The value [30] has been enqueued succesfully.`
`The value [10] has been dequeued succesfully.`
Seek: `Front element: 10`
`The value [10] has been dequeued succesfully.`
Size: `Current size: 2`
`The value [1] has been enqueued succesfully.`
`The value [2] has been enqueued succesfully.`
`The value [3] has been enqueued succesfully.`
Print queue: `Current Queue: 20 30 1 2 3`
Clear queue: `Queue cleared.`
Print queue: `Queue is empty.`
