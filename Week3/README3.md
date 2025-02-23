# Recursive Functions in C++

This repository explores recursive functions in C++. We demonstrate key recursive algorithms and their application to solve mathematical problems, manipulate strings, and tackle complex tasks like the Ackermann function. Below is a breakdown of the examples and exercises covered, with explanations of what we learned through each.

## Examples

### Example 3.1: Computing Factorial
We used recursion to compute the factorial of a number. This classic problem demonstrates how recursion can handle repetitive calculations by breaking the problem into smaller subproblems.

**Key Concept:**
- Factorial of `n` is defined as `n! = n * (n-1) * (n-2) * ... * 1`.
- The base case for the recursion is when `n == 0`.

### Example 3.2: Reversing a String
We created a recursive function that reverses a string by processing each character in reverse order. This example shows how recursion can be useful for string manipulation tasks, where you need to process elements in reverse or non-linear order.

**Key Concept:**
- Recursively read and print each character, storing the result in reverse order.

### Example 3.3: Computing Power
This example demonstrates how to compute `x^n` using recursion. We solved the problem by reducing `n` step by step, multiplying `x` by itself recursively until `n == 0`, which returns the result.

**Key Concept:**
- The base case for `x^n` is when `n == 0`, where the result is `1`.

### Example 3.4: Computing the Ackermann Function
We computed the Ackermann function, which is famous for its complex recursion and fast-growing results. This example highlights how deep recursion can lead to very large computations.

**Key Concept:**
- The Ackermann function has three recursive cases and grows rapidly with small input values.

---

## Exercises

### Exercise 3.1: Power of 2
In this exercise, we computed `2^n` for values of `n` from `0` to `20`. This demonstrates how recursion can handle repeated multiplication efficiently.

**Key Concept:**
- Recursive calls reduce the problem size by 1 each time, computing powers of 2.

### Exercise 3.2: Ackermann Function
We implemented the Ackermann function for `m = 3` and `n = 4`, illustrating its deeply recursive nature. This problem challenges the depth of recursion and shows how even small values of `m` and `n` lead to a huge number of recursive calls.

**Key Concept:**
- The Ackermann function is highly recursive and demonstrates how recursion can quickly lead to enormous complexity.

### Exercise 3.3: Recursive Functions

#### A) Print Numbers from `n` to `0`
We created a recursive function to print numbers from `n` down to `0`. This exercise helps reinforce how recursion can iterate over a sequence in reverse order.

**Key Concept:**
- Recursion helps iterate through numbers by reducing the problem size each time, ultimately printing the numbers in reverse order.

#### B) Binomial Coefficients
We computed binomial coefficients using recursion. This exercise showed how recursion can be applied to combinatorial problems, specifically calculating `C(n, k)`.

**Key Concept:**
- Binomial coefficients are calculated using Pascal's identity, which involves recursive calls to smaller subproblems.

#### C) Check Prime Number
We wrote a recursive function to check if a number is prime. This exercise demonstrated how recursion can be used for decision-making problems by recursively checking divisibility.

**Key Concept:**
- The function recursively checks if `n` is divisible by any number up to the square root of `n`, stopping when a divisor is found or the number is confirmed prime.

---

## Conclusion
Through the examples and exercises, we gained a comprehensive understanding of recursion and how to apply it to solve problems. The exercises provided a hands-on approach to mastering recursive functions, such as computing factorials, reversing strings, and calculating powers. We also explored complex problems like the Ackermann function and tackled practical tasks like prime checking and binomial coefficient calculation.

By understanding the key concepts in recursion, we’re better prepared to handle more advanced algorithms and data structures in future programming challenges. Recursion is a powerful technique, and this repository offers a strong foundation for exploring its many uses in C++.
