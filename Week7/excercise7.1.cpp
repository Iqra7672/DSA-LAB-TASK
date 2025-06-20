// ************************** Exercise 7.1 - Doubly Linked List Class **************************

#include <iostream>
using namespace std;

template <class T>
class double_linked {
    struct node {
        T data;
        node* prev;
        node* next;
        node(T t, node* p = NULL, node* n = NULL) {
            data = t;
            prev = p;
            next = n;
        }
    };

    node* head;
    node* tail;

public:
    double_linked() : head(NULL), tail(NULL) {}

    template<int N>
    double_linked(T(&arr)[N]) {
        head = tail = NULL;
        for (int i = 0; i < N; ++i) {
            push_back(arr[i]);
        }
    }

    bool empty() const {
        return head == NULL;
    }

    operator bool() const {
        return !empty();
    }

    void push_back(T);
    void push_front(T);
    T pop_back();
    T pop_front();

    ~double_linked() {
        while (head) {
            node* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

template <class T>
void double_linked<T>::push_back(T data) {
    node* newNode = new node(data, tail, NULL);
    if (!head) {
        head = tail = newNode;
    }
    else {
        tail->next = newNode;
        tail = newNode;
    }
}

template <class T>
void double_linked<T>::push_front(T data) {
    node* newNode = new node(data, NULL, head);
    if (!head) {
        head = tail = newNode;
    }
    else {
        head->prev = newNode;
        head = newNode;
    }
}

template <class T>
T double_linked<T>::pop_back() {
    if (empty()) {
        throw runtime_error("double_linked: list is empty");
    }
    node* temp = tail;
    T data = tail->data;
    tail = tail->prev;
    if (tail) {
        tail->next = NULL;
    }
    else {
        head = NULL;
    }
    delete temp;
    return data;
}

template <class T>
T double_linked<T>::pop_front() {
    if (empty()) {
        throw runtime_error("double_linked: list is empty");
    }
    node* temp = head;
    T data = head->data;
    head = head->next;
    if (head) {
        head->prev = NULL;
    }
    else {
        tail = NULL;
    }
    delete temp;
    return data;
}

int main() {
    int array[5] = { 4, 6, 8, 32, 19 };
    double_linked<int> dlist(array);

    dlist.push_back(11);
    dlist.push_front(100);

    while (dlist) {
        cout << dlist.pop_back() << " ";
    }

    return 0;
}
