//EXERCISE 5.1
#pragma once
#include <iostream>
template <typename T>
class queue {
private:
    int front, rear, maxqueue, count;
    T* items;

public:
    queue(int m = 100);
    ~queue();
    bool isempty() const;
    bool isfull() const;
    void insert(T newitem);
    void remove(T& item);
};

//EXERCISE 5.2
#pragma once
#include <iostream>
template <typename T>
class queue {
private:
    int front, rear, maxqueue, count;
    T* items;

public:
    queue(int m = 100);
    ~queue();
    bool isempty() const;
    bool isfull() const;
    void insert(T newitem);
    void remove(T& item);
};
