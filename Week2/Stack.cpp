                        //----------EXAMPLE 2.1----------
//#include <iostream>
//#include <cstdlib>
//#include "Stack.h"
//
//using namespace std;
//
//stack::stack() {
//	top = -1;
//}
//int stack::IsEmpty() const {
//	return (top == -1);
//}
//
//int stack::IsFull() const {
//	return (top == Max_items - 1);
//}
//
//void stack::Push(itemtype newitem) {
//	if (IsFull()) {
//		cout << "Stack overflow!" << endl;
//		exit(1);
//	}
//	top++;
//	items[top] = newitem;
//}
//void stack::Pop(itemtype& newitem) {
//	if (IsEmpty()) {
//		cout << "Stack underflow!" << endl;
//		exit(1);
//	}
//	newitem = items[top];
//	top--;
//}
//

                          //----------EXERCISE 2.1----------
                          //           Part a
//#include <iostream>
//#include <cstdlib>
//#include "Stack.h"
//
//using namespace std;
//
//stack::stack() {
//	top = -1;
//}
//int stack::IsEmpty() const {
//	return (top == -1);
//}
//
//int stack::IsFull() const {
//	return (top == Max_items - 1);
//}
//
//void stack::Push(itemtype newitem) {
//	if (IsFull()) {
//		cout << "Stack overflow!" << endl;
//		exit(1);
//	}
//	top++;
//	items[top] = newitem;
//}
//
//void stack::Pop(itemtype& newitem) {
//	if (IsEmpty()) {
//		cout << "Stack underflow!" << endl;
//		exit(1);
//	}
//	newitem = items[top];
//	top--;
//}
//
//itemtype stack::Peek() const {
//	if (IsEmpty()) {
//		cout << "Stack is empty, cannot peek!" << endl;
//		exit(1);
//	}
//	return items[top];
//}
                           

                          //----------EXERCISE 2.1----------
                          //           Part b

//#include "Stack.h"
//#include <iostream>
//using namespace std;
//
//Stack::Stack() {
//    top = -1;
//}
//
//int Stack::IsEmpty() const {
//    return top == -1;
//}
//
//int Stack::IsFull() const {
//    return top == MAX_ITEMS - 1;
//}
//
//void Stack::Push(char newItem) {
//    if (IsFull()) {
//        cout << "Stack is full!" << endl;
//    }
//    else {
//        items[++top] = newItem;
//    }
//}
//
//void Stack::Pop(char& item) {
//    if (IsEmpty()) {
//        cout << "Stack is empty!" << endl;
//    }
//    else {
//        item = items[top--];
//    }
//}
//
//char Stack::Peek() const {
//    if (IsEmpty()) {
//        cout << "Stack is empty!" << endl;
//        return '\0';
//    }
//    return items[top];
//}
