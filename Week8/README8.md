# Binary Tree Exercises - Dynamic and Static Implementations in C++

This repository contains two implementations of a **Binary Tree** in C++:

- **Dynamic Binary Tree** using pointers (linked nodes)
- **Static Binary Tree** using an array representation

---

## 1. Dynamic Binary Tree

### Overview

- Uses nodes dynamically allocated with pointers.
- Each node contains data (`info`), and pointers to its left child, right child, and parent.
- Tree can grow or shrink during runtime.
- Flexible and common way to implement binary trees.

### Key Functions

- `makeTree(int x)` - Creates a new node with data `x`.
- `setRoot(int x)` - Sets the root node of the tree.
- `setLeft(NODEPTR p, int x)` - Inserts a left child to node `p`.
- `setRight(NODEPTR p, int x)` - Inserts a right child to node `p`.
- `pretrav(NODEPTR p)` - Preorder traversal (root, left, right).
- `intrav(NODEPTR p)` - Inorder traversal (left, root, right).
- `posttrav(NODEPTR p)` - Postorder traversal (left, right, root).
- `isLeft(NODEPTR p)` / `isRight(NODEPTR p)` - Checks if node is left or right child.

### How it works

- Nodes are created dynamically on the heap using `new`.
- Each node keeps track of its parent for upward navigation.
- Traversal functions recursively visit nodes in different orders.
- The example in `main` builds a small tree and prints traversals.

---

## 2. Static Binary Tree (Array-based)

### Overview

- Implements binary tree in a fixed-size array.
- Each element stores the node’s data and indices of its left, right children, and parent.
- Tree size is fixed by `NUMNODES` constant.
- Uses array indices to simulate tree structure.
- Left child index = `2 * parentIndex`, Right child index = `2 * parentIndex + 1`

### Key Functions

- `setRoot(int value)` - Sets root node at index 1.
- `insertLeft(int parentIndex, int value)` - Inserts left child of node at `parentIndex`.
- `insertRight(int parentIndex, int value)` - Inserts right child of node at `parentIndex`.
- `inorder(int index)` - Inorder traversal starting from node at `index`.
- `preorder(int index)` - Preorder traversal starting from node at `index`.
- `postorder(int index)` - Postorder traversal starting from node at `index`.

### How it works

- Tree nodes stored as elements of fixed array.
- `info == -1` indicates empty node.
- Parent, left, and right relationships maintained by storing indices.
- Traversals are recursive and use node indices.
- The example in `main` builds a fixed tree and outputs different traversals.

---

## Summary

| Aspect                 | Dynamic Binary Tree               | Static Binary Tree (Array)          |
|------------------------|---------------------------------|------------------------------------|
| Memory allocation      | Dynamic (heap allocated nodes)   | Static (fixed array size)           |
| Node connections      | Pointers (left, right, parent)   | Array indices (left = 2i, right=2i+1) |
| Tree size             | Flexible (grow/shrink dynamically)| Fixed size (predefined max nodes)  |
| Traversal             | Recursive using pointers          | Recursive using array indices       |
| Use case              | General-purpose trees             | Complete trees, heaps, fixed-size trees |

---

