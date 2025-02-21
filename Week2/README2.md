# Stack Implementation Using Static and Dynamic Arrays

## Overview

This repository contains multiple implementations and exercises related to **stack data structures** using both **static arrays** and **dynamic arrays** in C++. Stacks are fundamental data structures used in various applications such as expression evaluation, parsing, and algorithmic problem-solving. In this repository, we cover:

1. **Static Array Implementation**: Stack is implemented using a fixed-size array.
2. **Dynamic Array Implementation**: Stack is implemented using a dynamically allocated array.
3. **Class Templates**: Generic stack implementation using class templates to support different data types.
4. **Various Exercises**: Practical exercises involving stack operations like string reversal, checking parenthesis validity, and converting infix expressions to postfix.

The repository includes examples and exercises for better understanding of how stacks work in different contexts.

---

## File Breakdown

### 1. **Example 2.1 - Stack Implementation Using Static Array**

- **Purpose**: This part demonstrates how to implement a stack using a static array in C++.
- **Key Functions**:
  - `Push(ItemType newItem)`: Adds an item to the stack.
  - `Pop(ItemType& item)`: Removes and returns the top item of the stack.
  - `Peek()`: Returns the top item without removing it.
  - `IsEmpty()`: Checks if the stack is empty.
  - `IsFull()`: Checks if the stack is full.
- **Example Code**:
  - A stack of integers is created, where we push integers from 0 to 19 into the stack and then pop and display them.

### 2. **Exercise 2.1 - Stack Operations on Characters (Part A & Part B)**

- **Part A**:
  - Modifies the stack implementation to work with `char` values.
  - Adds a `Peek()` function to check the top item without removing it.
  - Example code pushes characters into the stack and then pops them to display in reverse order.
  
- **Part B**:
  - Implements a string reversal function using the stack, where each character of the string is pushed onto the stack and then popped to form the reversed string.

### 3. **Example 2.2 - Stack Implementation Using Dynamic Array and Class Template**

- **Purpose**: This part demonstrates how to implement a stack using a dynamically allocated array, providing flexibility to change the size of the stack dynamically.
- **Class Template**:
  - The stack is implemented using a class template, so it can store any data type (integers, floats, characters, etc.).
  - The dynamic stack can grow in size as needed.
  
- **Example Code**:
  - A generic `Stack<T>` class is implemented with methods for pushing, popping, checking if the stack is empty or full, and handling dynamic memory allocation.

### 4. **Exercise 2.2 - Stack for Valid Parentheses Check, Infix to Postfix Conversion, and Postfix Evaluation**

- **Exercise Details**:
  - **Valid Parentheses Check**: A stack is used to check if parentheses, braces, and brackets are balanced in an expression.
  - **Infix to Postfix Conversion**: This part shows how to use a stack to convert an infix expression to a postfix expression (Reverse Polish Notation).
  - **Postfix Expression Evaluation**: A stack is used to evaluate a postfix expression.

- **Key Functions**:
  - `isvalid()`: Checks if parentheses in a string are balanced.
  - `infixtopostfix()`: Converts an infix expression to postfix.
  - `checkpostfix()`: Evaluates a postfix expression.

---

## What We Achieved

1. **Static Stack Implementation**: 
   - Implemented a basic stack using a static array.
   - Demonstrated basic stack operations such as pushing, popping, and peeking.

2. **Dynamic Stack Implementation**: 
   - Created a stack with dynamic memory allocation, allowing for flexible stack sizes.
   - Used class templates to allow for stacks to store different types of data.

3. **Practical Exercises**: 
   - Reversed a string using a stack.
   - Checked for balanced parentheses using a stack.
   - Converted infix expressions to postfix and evaluated postfix expressions.

4. **Generic Stack Implementation**: 
   - The use of class templates allows the stack implementation to be reused for different data types (integers, characters, etc.).

---

