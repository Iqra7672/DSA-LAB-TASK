# Doubly Linked List and Long Integer Addition Exercises

This repository contains two exercises demonstrating the use of doubly linked lists in C++.

---

## Exercise 7.1 - Doubly Linked List Class

### Overview

This exercise implements a **template-based doubly linked list class** `double_linked` supporting basic operations like:

- **push_back(T data)**: Insert an element at the end of the list.
- **push_front(T data)**: Insert an element at the front of the list.
- **pop_back()**: Remove and return the element from the end.
- **pop_front()**: Remove and return the element from the front.
- **empty()**: Check if the list is empty.

### Key Concepts

- **Doubly Linked List**: Each node stores a pointer to the previous and next nodes, allowing traversal in both directions.
- **Templates**: The list can store elements of any data type.
- **Constructor from Array**: The list can be initialized from a fixed-size array.
- **Destructor**: Ensures all nodes are deleted when the list is destroyed to avoid memory leaks.
- **Operator bool()**: Allows the list object to be used in boolean contexts (e.g., in a while loop) to check if it's non-empty.

### How it works

- Nodes are dynamically allocated with pointers to previous and next nodes.
- `push_back` appends nodes at the tail.
- `push_front` inserts nodes at the head.
- `pop_back` and `pop_front` remove nodes from tail and head respectively, updating pointers accordingly.
- In `main`, the list is created from an array, elements are added front and back, then popped and printed from the back until the list is empty.

---

## Exercise 7.2 - Long Integer Addition Using Doubly Linked List

### Overview

This exercise uses a **doubly linked list to represent large integers digit-by-digit** and implements addition of two such numbers.

### Key Functions

- **insertDigit(int digit)**: Adds a digit to the end of the list (least significant digit is at tail).
- **insertNumber(string number)**: Converts a string of digits to a doubly linked list of digits.
- **display()**: Prints the number in correct order.
- **add(LongInt& num1, LongInt& num2)**: Static function that adds two `LongInt` objects digit by digit, managing carry.
- **insertFront(int digit)**: Inserts a digit at the front, used to build the sum from least significant to most significant digit.
- **Destructor**: Frees all allocated nodes.

### How it works

- Each digit of the number is stored as a node in a doubly linked list.
- Addition starts from the least significant digit (tail) of both numbers.
- Sum and carry are calculated for each digit pair.
- Result digits are inserted at the front of the result list to maintain correct order.
- Finally, the sum is displayed.

### Usage

- User inputs two large integers as strings.
- These strings are converted into linked lists.
- The static `add` method computes their sum.
- The result is displayed.

---

## Common Concepts Demonstrated

- Dynamic memory management with `new` and `delete`.
- Use of doubly linked lists for flexible data storage.
- Traversing linked lists forwards and backwards.
- Implementing abstract data types (list, big integer) with custom classes.
- Handling edge cases like empty lists.
- Using templates for generic programming.

---

