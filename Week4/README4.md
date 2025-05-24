# Week Four - Queue Implementations and Palindrome Checker

This project includes implementations for three core data structures and algorithms: a static queue, a dynamic queue, and a palindrome checker built using a double-ended queue, also known as a deque. The focus is on practical usage of queues and deques in different contexts, using pointer-based logic for dynamic structures.

## One - Static Queue (Files: static.cpp, static.h)

The static queue is implemented using a fixed-size array. It is a simple and efficient way to store data when the maximum number of elements is known ahead of time.

**Main Functions:**
- insert
- remove
- isFull
- isEmpty

**Use Case:**
Best suited for applications where memory size and queue length are predetermined.

## Two - Dynamic Queue (Files: dynamic.cpp, dynamic.h)

The dynamic queue is implemented using linked lists. It allows the queue to grow or shrink during runtime depending on the number of elements.

**Main Functions:**
- insert
- remove
- isFull
- isEmpty

**Use Case:**
Recommended for scenarios where the number of elements cannot be predicted in advance. It utilizes pointers for node management, making it memory-efficient.

## Three - Palindrome Checker using Double-Ended Queue (Files: DeQue.cpp, DeQue.h)

This implementation uses a deque (double-ended queue) to determine whether a given string is a palindrome. It compares characters from the front and rear of the string simultaneously.

**Main Functions:**
- insertFront
- insertRear
- removeFront
- removeRear

**Use Case:**
Ideal for checking palindromes efficiently by utilizing both ends of the data structure. Internally uses a pointer-based linked list for dynamic behavior.


