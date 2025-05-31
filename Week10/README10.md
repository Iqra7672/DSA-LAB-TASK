# Graph Algorithms in C++

This repository contains basic implementations of graph-related algorithms using adjacency matrices in C++. The code is divided into two exercises demonstrating traversal and shortest path techniques.

---

## 📘 Exercise 11.1: Graph Traversal

### Features:
- Undirected weighted graph using adjacency matrix
- Functions implemented:
  - `addEdge(u, v, weight)`: Adds an edge with optional weight
  - `print()`: Displays the adjacency matrix
  - `BFS(start)`: Breadth-First Search traversal
  - `DFS(start)`: Depth-First Search traversal

### Algorithms Used:
- **Breadth-First Search (BFS)** using queue
- **Depth-First Search (DFS)** using recursion

---

## 📘 Exercise 11.2: Dijkstra’s Algorithm

### Features:
- Weighted graph represented with adjacency matrix
- Functions implemented:
  - `addEdge(u, v, weight)`: Adds an edge with weight
  - `dijkstra(src)`: Computes the shortest path from source using Dijkstra’s algorithm

### Algorithm Used:
- **Dijkstra’s Shortest Path Algorithm**
  - Finds the shortest distance from a source node to all other nodes
  - Does not use STL priority queue (basic implementation)

---


