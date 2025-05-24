// ************************** Exercise 7.2 - Long Integer Addition Using Doubly Linked List **************************

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
    Node(int value) : data(value), prev(nullptr), next(nullptr) {}
};

class LongInt {
private:
    Node* head;
    Node* tail;

public:
    LongInt() : head(nullptr), tail(nullptr) {}

    void insertDigit(int digit) {
        Node* newNode = new Node(digit);
        if (!head) {
            head = tail = newNode;
        }
        else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void insertNumber(const string& number) {
        for (char digit : number) {
            insertDigit(digit - '0');
        }
    }

    void display() const {
        if (!head) {
            cout << "0";
            return;
        }
        Node* temp = head;
        while (temp) {
            cout << temp->data;
            temp = temp->next;
        }
    }

    static LongInt add(LongInt& num1, LongInt& num2) {
        LongInt result;
        Node* p1 = num1.tail;
        Node* p2 = num2.tail;
        int carry = 0;

        while (p1 || p2 || carry) {
            int sum = carry;
            if (p1) {
                sum += p1->data;
                p1 = p1->prev;
            }
            if (p2) {
                sum += p2->data;
                p2 = p2->prev;
            }

            carry = sum / 10;
            result.insertFront(sum % 10);
        }

        return result;
    }

    void insertFront(int digit) {
        Node* newNode = new Node(digit);
        if (!head) {
            head = tail = newNode;
        }
        else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    ~LongInt() {
        while (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    LongInt num1, num2, result;
    string str1, str2;

    cout << "Enter first long integer: ";
    cin >> str1;
    cout << "Enter second long integer: ";
    cin >> str2;

    num1.insertNumber(str1);
    num2.insertNumber(str2);

    cout << "\nFirst Number: ";
    num1.display();
    cout << "\nSecond Number: ";
    num2.display();

    result = LongInt::add(num1, num2);

    cout << "\nSum: ";
    result.display();
    cout << endl;

    return 0;
}
