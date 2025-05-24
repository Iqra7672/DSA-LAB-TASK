//EXERCISE 5.1
#pragma once
#include "queue.h"

template <typename T>
class pque {
private:
    queue<T> pq[10];

public:
    pque();
    bool isempty() const;
    bool IsFull();
    void insert(T newitem, int p);
    void remove(T& item);
};

//EXERCISE 5.2
#pragma once
#include "queue.h"
#include <iostream>
using namespace std;

template <typename T>
class pque {
private:
    queue<T>* pq;
    int levels;

public:
    pque(int N);
    ~pque();
    bool isempty() const;
    void insert(T newitem, int p);
    void remove(T& item);
};
