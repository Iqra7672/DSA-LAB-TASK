               /*IMPLEMENTATION OF STACK USING DYNAMIC ARRAY
                         AND CLASS  TEMPLATE */
                           /*  EXAMPLE 2.2*/


//#include<iostream>
//#include"Stack1.h"
//using namespace std;
//int main() {
//
//	Stack<int> IntStack;
//	Stack<float> FloatStack;
//	int data;
//	float val;
//
//	IntStack.Push(35);
//	FloatStack.Push(3.1415927);
//
//	IntStack.Pop(data);
//	cout << data << endl;
//
//	FloatStack.Pop(val);
//	cout << val << endl;
//	return 0;
//
//
//}


                                  /* EXCERCISE 2.2*/
                                 //* ALL PARTS*//

//#include <iostream>
//#include <cctype>
//#include "Stack1.h"
//
//using namespace std;
//
//
//bool isvalid(string expr) {
//    Stack s;
//    for (char ch : expr) {
//        if (ch == '(' || ch == '{' || ch == '[') {
//            s.push(ch);
//        }
//        else if (ch == ')' || ch == '}' || ch == ']') {
//            if (s.isEmpty()) return false;
//            char top = s.pop();
//            if ((ch == ')' && top != '(') ||
//                (ch == '}' && top != '{') ||
//                (ch == ']' && top != '[')) {
//                return false;
//            }
//        }
//    }
//    return s.isEmpty();
//}
//
//
//int precedencerule(char op) {
//    if (op == '+' || op == '-') return 1;
//    if (op == '*' || op == '/') return 2;
//    return 0;
//}
//
//
//string infixtopostfix(string infix) {
//    Stack s;
//    string postfix = "";
//
//    for (char ch : infix) {
//        if (isalnum(ch)) {
//            postfix = postfix+ ch;
//        }
//        else if (ch == '(') {
//            s.push(ch);
//        }
//        else if (ch == ')') {
//            while (!s.isEmpty() && s.peek() != '(') {
//                postfix += s.pop();
//            }
//            s.pop();  
//        }
//        else {  
//            while (!s.isEmpty() && precedencerule(s.peek()) >= precedencerule(ch)) {
//                postfix += s.pop();
//            }
//            s.push(ch);
//        }
//    }
//
//    while (!s.isEmpty()) {
//        postfix += s.pop();
//    }
//
//    return postfix;
//}
//
//
//int checkpostfix(string postfix) {
//    Stack s;
//
//    for (char ch : postfix) {
//        if (isdigit(ch)) {
//            s.push(ch - '0');  
//        }
//        else {
//            int val2 = s.pop();
//            int val1 = s.pop();
//
//            switch (ch) {
//            case '+': s.push(val1 + val2); break;
//            case '-': s.push(val1 - val2); break;
//            case '*': s.push(val1 * val2); break;
//            case '/':
//                if (val2 == 0) { 
//                    cout << "Error: Division by zero!" << endl;
//                    return 0;  
//                }
//                s.push(val1 / val2);
//                break;
//            default:
//                cout << "Invalid operator: " << ch << endl;
//                return 0;
//            }
//        }
//    }
//
//    return s.pop();
//}
//
//
//int main() {
//    string exp;
//    int choice;
//
//    do {
//        cout << "\nplease select ur choice:\n";
//        cout << "1 Check Parenthesis Validity\n";
//        cout << "2 Convert Infix to Postfix\n";
//        cout << "3 Evaluate Postfix exp\n";
//        cout << "4 Exit\n";
//        cout << "Enter choice: ";
//        cin >> choice;
//        if (choice == 1) {
//            cout << "enetr expression :";
//            cin >> exp;
//            cout << (isvalid(exp) ? "Valid" : "Invalid") << endl;
//            break;
//        }
//        else if (choice == 2) {
//            cout << "Enter infix exp: ";
//            cin >> exp;
//            cout << "Postfix: " << infixtopostfix(exp) << endl;
//            break;
//
//        }
//        else if (choice == 3) {
//            cout << "Enter postfix exp: ";
//            cin >> exp;
//            cout << "Result: " << checkpostfix(exp) << endl;
//            break;
//
//        }
//        else {
//            cout << "stop";
//            break;
//           
//        }
//       
//        cin >> choice;
//    } while (choice == !4);
//
//    return 0;
//}