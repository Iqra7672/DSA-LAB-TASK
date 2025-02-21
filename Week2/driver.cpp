 
               /*IMPLEMENTATION OF STACK USING A STATIC ARRAY*/
                             /*  EXAMPLE 2.1*/

//#include<iostream>
//#include "Stack.h"
//#include<string>
//using namespace std;
//
//int main() {
//	Stack s;
//	int item;
//	for (int i = 0; i < 20; i++)
//		s.Push(i);
//
//	for (int i = 0; i < 20; i++)
//	{
//		s.Pop(item);
//		cout << item << endl;
//
//	}
//
//	return 0;
//}



                              /* EXCERCISE 2.1
                                   PART A*/


//
//#include<iostream>
//#include "Stack.h"
//#include<string>
//using namespace std;
//
//int main() {
//	Stack s;
//	char item;
//	for (int i = 0; i < 20; i++)
//		s.Push(i);
//
//	cout << "The element : " << s.Peek() << endl;
//
//for (int i = 0; i < 20; i++)
//{
//	s.Pop(item);
//	cout << item << endl;
//
//}
//
//
//
//return 0;
//}
//

                          /* EXCERCISE 2.1
                             PART B*/
                  
//#include <iostream>
//#include "Stack.h"
//#include <string>
//using namespace std;
//
//string ReverseString(const string& str) {
//    Stack stack;
//    string reversed = "";
//
//    for (char ch : str) {
//        stack.Push(ch);
//    }
//
//    while (!stack.IsEmpty()) {
//        char ch;
//        stack.Pop(ch);
//        reversed += ch;
//    }
//
//    return reversed;
//}
//
//int main() {
//    string input;
//    cout << "Enter a string: ";
//    getline(cin, input);
//
//    string reversed = ReverseString(input);
//    cout << "Reversed string: " << reversed << endl;
//
//    return 0;
//}
