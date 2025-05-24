# Linked List Exercises in C++ Using Pointers

This repository contains implementations and tests of basic linked list operations using pointers in C++, demonstrated through three exercises.

---

## Exercise 6.1: Basic Linked List Operations

This exercise tests core linked list functions from `linkedList.h`:

- **push(value)**: Insert a new node at the beginning of the list.
- **insertAfter(oldValue, newValue)**: Insert a new node with `newValue` after the node containing `oldValue`.
- **deleteItem(value)**: Delete the node containing the specified `value`.
- **pop()**: Remove and return the first node's value (like stack pop).
- **emptyList()**: Check if the list is empty.

**Key points:**

- The list is implemented as a singly linked list with a `head` pointer.
- Nodes are dynamically allocated using `new` and freed with `delete`.
- Pointer traversal is used to locate nodes for insertion and deletion.
- Example flow:
  1. Push 10, 20, 30 → list is 30 → 20 → 10.
  2. Insert 25 after 20 → list is 30 → 20 → 25 → 10.
  3. Delete 20 → list is 30 → 25 → 10.
  4. Pop all nodes and print them.

---

## Exercise 6.2: Reverse String Using Stack (Linked List)

This exercise uses the linked list as a stack of characters:

- Characters of a user-input string are **pushed** onto the list one by one.
- Popping characters from the list produces the reversed string.
- Demonstrates how linked lists can be used as stacks with pointer-based push/pop operations.

---

## Exercise 6.3: Using User Input with Struct Node (`LinkedStr`)

This exercise extends linked list usage by:

- Taking user input to create nodes dynamically.
- Implementing operations like:
  - Creating a linked list of user-specified size (`makeStr(num_nodes)`).
  - Displaying the list (`displayStr()`).
  - Removing a node with a specific value (`remove(k)`).
  - Removing the first node (`removeFirst()`).
  - Removing the last node (`removeLast()`).
  
**This emphasizes:**

- Using pointers to dynamically build and modify linked lists based on user input.
- Traversing, inserting, and deleting nodes using pointer manipulation.

---

## Summary of Core Pointer-Based Operations

| Operation          | Description                                         | Pointer Usage                                  |
|--------------------|-----------------------------------------------------|------------------------------------------------|
| `push`             | Insert at head                                      | Allocate new node, set `newNode->next = head` |
| `pop`              | Remove from head and return value                   | Update `head` pointer to next node             |
| `insertAfter`       | Insert new node after node containing `oldValue`   | Traverse nodes with pointer until match found  |
| `deleteItem`        | Remove node containing specified value             | Use two pointers (`prev` and `curr`) to unlink and delete node |
| `makeStr`           | Create list with user input values                   | Allocate and link nodes as per user input       |
| `removeFirst`       | Remove the first node                                | Update `head` pointer                           |
| `removeLast`        | Remove the last node                                 | Traverse to second last node and update pointer|

---


