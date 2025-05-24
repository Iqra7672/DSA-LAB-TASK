//EXERCISE 5.1
#include "pque.h"
#include <iostream>
using namespace std;

template <typename T>
pque<T>::pque() {
}

template <typename T>
bool pque<T>::isempty() const {
    for (int i = 0; i < 10; i++) {
        if (!pq[i].isempty())
            return false;
    }
    return true;
}

template <typename T>
void pque<T>::insert(T newitem, int priority) {
    if (priority < 0 || priority >= 10) {
        cout << "Invalid priority level!" << endl;
        return;
    }
    pq[priority].insert(newitem);
}

template <typename T>
void pque<T>::remove(T& item) {
    for (int i = 0; i < 10; i++) {
        if (!pq[i].isempty()) {
            pq[i].remove(item);
            return;
        }
    }
    cout << "Priority queue underflow!" << endl;
}

template class pque<int>;

//EXERCISE 5.2
#include "pque.h"
#include <iostream>
using namespace std;

template <typename T>
pque<T>::pque(int N) {
    levels = N;
    pq = new queue<T>[levels];
}

template <typename T>
pque<T>::~pque() {
    delete[] pq;
}

template <typename T>
bool pque<T>::isempty() const {
    for (int i = 0; i < levels; i++) {
        if (!pq[i].isempty())
            return false;
    }
    return true;
}

template <typename T>
void pque<T>::insert(T newitem, int priority) {
    if (priority < 0 || priority >= levels) {
        cout << "Invalid priority level!" << endl;
        return;
    }
    pq[priority].insert(newitem);
}

template <typename T>
void pque<T>::remove(T& item) {
    for (int i = 0; i < levels; i++) {
        if (!pq[i].isempty()) {
            pq[i].remove(item);
            return;
        }
    }
    cout << "Priority queue underflow!" << endl;
}
