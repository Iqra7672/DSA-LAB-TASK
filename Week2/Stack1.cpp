                /*IMPLEMENTATION OF STACK USING DYNAMIC ARRAY
                         AND CLASS  TEMPLATE */
                             /*  EXAMPLE 2.2*/
                           

//#include<iostream>
//#include "Stack1.h"
//#include <stdlib.h>
//using namespace std;
//
//template<class ItemType>
//Stack<ItemType>::Stack() {
//
//	maxStack = 500;
//	top = -1;
//	items = new ItemType[500];
//
//}
//
//template<class ItemType>
//Stack<ItemType>::Stack(int max)
//{
//	maxStack = max;
//	top = -1;
//	items = new ItemType[max];
//}
//
//template<class ItemType>
//Stack<ItemType>::~Stack() {
//	delete[items;]
//}
//
//template<class ItemType>
//int Stack<ItemType>::IsEmpty()
//{
//	return(top == -1);
//}
//
//template<class ItemType>
//int Stack<ItemType>::IsFull()
//{
//	return(top == maxStack - 1);
//}
//
//template<class ItemType>
//void Stack<ItemType>::Push(ItemType newItem)
//{
//	if (IsFull())
//	{
//		cout << "Stack Overflow " << endl;
//		exist(1);
//	}
//	top++;
//	items[top] = newItem;
//}
//
//template<class ItemType>
//void Stack<ItemType>::Pop(ItemType& item)
//{
//	if (IsEmpty())
//	{
//		cout << "Stack Underflow " << endl;
//		exist(1);
//	}
//	item = items[top];
//	top--;
//}
    


                                  /* EXCERCISE 2.2*/
                                 //* ALL PARTS*//

//#include "Stack1.h"
//
//Stack::Stack() {
//    top = -1;
//}
//
//
//bool Stack::isEmpty() {
//    return top == -1;
//}
//bool Stack::isFull() {
//    return top == MAX_SIZE - 1;
//}
//
//void Stack::push(char value) {
//    if (!isFull()) {
//        arr[++top] = value;
//    }
//    else {
//        cout << "Stack Overflow\n";
//    }
//}
//char Stack::pop() {
//    if (!isEmpty()) {
//        return arr[top--];
//    }
//    else {
//        cout << "Stack Underflow\n";
//        return '\0';
//    }
//}
//
//
//char Stack::peek() {
//    if (!isEmpty()) {
//        return arr[top];
//    }
//    return '\0';
//}