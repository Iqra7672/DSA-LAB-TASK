# Binary Search Tree in C++ Using Templates and Pointers

This project implements a Binary Search Tree (BST) in C++ using templates and pointers. It supports standard operations such as insertion, deletion, search, in-order traversal, and node counting. The implementation is recursive and generic, allowing it to work with any data type such as integers or characters.

## What is a Binary Search Tree

A Binary Search Tree is a hierarchical data structure where each node contains:
- A value called info
- A pointer to the left child (for smaller values)
- A pointer to the right child (for larger values)

Rules of a Binary Search Tree:
- Left subtree contains nodes with values less than the current node
- Right subtree contains nodes with values greater than the current node
- No duplicate values are allowed

## Node Structure

Each node is defined using a template structure:


template<class T>
struct TreeNode {
    T info;
    TreeNode* left;
    TreeNode* right;
};
This allows the tree to handle any data type and link nodes via left and right pointers.

BST Class Overview
Member Variable

TreeNode<T>* root;
Points to the topmost node in the tree

If root is null, the tree is empty

Operations
Constructor and Destructor

BinarySearchTree();      // Initializes root to nullptr
~BinarySearchTree();     // Deletes all nodes recursively using post-order traversal
Insertion

void insertItem(T item);
Recursively finds the correct position and inserts a new node:


if (item < node->info)
    insertHelper(node->left, item);
else if (item > node->info)
    insertHelper(node->right, item);
Search

void RetrieveItem(T& item, bool& found);
Recursively searches for the item:

If found, sets found to true

Otherwise, sets found to false

Deletion

void DeleteItem(T& item);
Handles three cases:

Node with no children - delete the node

Node with one child - replace node with its child

Node with two children - replace with in-order successor (smallest value in right subtree)

In-Order Traversal

void PrintTree();
Performs in-order traversal (left, root, right) and prints the tree:


void PrintHelper(TreeNode<T>* node) {
    if (node != nullptr) {
        PrintHelper(node->left);
        cout << node->info << " ";
        PrintHelper(node->right);
    }
}
Node Count

int NumberOfNodes();
Recursively counts and returns the number of nodes in the tree.

Example Usage
Inserting Integers

BinarySearchTree<int> bst;
bst.insertItem(10);
bst.insertItem(5);
bst.insertItem(15);
bst.insertItem(3);
bst.insertItem(7);

Output:

In-order: 3 5 7 10 15
Total nodes: 5
Item found
After deleting 7: 3 5 10 15
Inserting Characters
BinarySearchTree<char> bst;
string str = "hello";
for (char ch : str)
    bst.insertItem(ch);

bst.PrintTree(); // Output: e h l o
Pointer Behavior Summary
Function	Description
insertItem	Traverses tree using left and right pointers
retrieveItem	Navigates using comparisons and pointers
deleteItem	Reassigns pointers based on deletion case
PrintTree	Uses in-order traversal via pointers
Destructor	Deletes nodes recursively using pointers