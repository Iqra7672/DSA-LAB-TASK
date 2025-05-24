# Queue and Priority Queue Implementations in C++

## Overview

This repository contains implementations of different queue data structures and related exercises in C++. The exercises cover static queues, dynamic queues, priority queues, and palindrome checking using deques.

## Exercises and Basic Functions

### Exercise 4.1 - Static Queue (Static Array-Based Queue)

- Implements a queue using a fixed-size array.
- Basic operations:
  - `insert(item)`: Adds an element at the rear.
  - `remove(item)`: Removes an element from the front.
  - `isfull()`: Checks if the queue is full.
  - `isempty()`: Checks if the queue is empty.
- Suitable when maximum size is known upfront.

### Exercise 4.2 - Dynamic Queue (Linked List-Based Queue)

- Implements a queue using a linked list allowing dynamic size.
- Operations are similar to the static queue but without fixed size constraints.
- Basic operations:
  - `insert(item)`: Adds an element at the rear.
  - `remove(item)`: Removes an element from the front.
  - `isfull()`: Checks if the queue is full (usually false unless memory exhausted).
  - `isempty()`: Checks if the queue is empty.

### Exercise 5.1 - Priority Queue with Fixed Priority Levels

- Priority queue implemented with an array of 10 queues (one per priority level).
- Basic operations:
  - `insert(item, priority)`: Inserts item based on priority (0-9).
  - `remove(item)`: Removes item from the highest priority non-empty queue.
  - `isempty()`: Checks if all queues are empty.
- Fixed 10 priority levels.

### Exercise 5.2 - Priority Queue with Dynamic Priority Levels

- Priority queue implemented with dynamically allocated array of queues.
- Number of priority levels is configurable at runtime.
- Basic operations:
  - `insert(item, priority)`: Inserts item based on user-defined priority range.
  - `remove(item)`: Removes item from highest priority non-empty queue.
  - `isempty()`: Checks if all queues are empty.
- Supports flexible priority levels.

### Queue Class (Static and Dynamic Variants)

- Core queue class used by priority queue.
- Manages internal array for static queue or dynamic linked list for dynamic queue.
- Operations:
  - Constructor/destructor for resource management.
  - `insert(item)`: Adds item to the queue.
  - `remove(item)`: Removes item from the queue.
  - `isempty()`: Checks if empty.
  - `isfull()`: Checks if full (for static queue).

