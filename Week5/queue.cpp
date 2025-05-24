//EXERCISE 5.1
#include "queue.h"
#include <iostream>
using namespace std;

template <typename T>
queue<T>::queue(int m) {
    maxqueue = m;
    front = 0;
    rear = 0;
    count = 0;
    items = new T[maxqueue];
}

template <typename T>
queue<T>::~queue() {
    delete[] items;
}

template <typename T>
bool queue<T>::isempty() const {
    return count == 0;
}

template <typename T>
bool queue<T>::isfull() const {
    return count == maxqueue;
}

template <typename T>
void queue<T>::insert(T newitem) {
    if (isfull()) {
        cout << "Queue overflow!" << endl;
        exit(1);
    } else {
        items[rear] = newitem;
        rear = (rear + 1) % maxqueue;
        ++count;
    }
}

template <typename T>
void queue<T>::remove(T& item) {
    if (isempty()) {
        cout << "Queue underflow!" << endl;
        exit(1);
    } else {
        item = items[front];
        front = (front + 1) % maxqueue;
        --count;
    }
}

template class queue<int>;

//EXERCISE 5.2
#include "queue.h"
#include <iostream>
using namespace std;

template <typename T>
queue<T>::queue(int m) {
    maxqueue = m;
    front = 0;
    rear = 0;
    count = 0;
    items = new T[maxqueue];
}

template <typename T>
queue<T>::~queue() {
    delete[] items;
}

template <typename T>
bool queue<T>::isempty() const {
    return count == 0;
}
