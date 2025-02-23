

                                 /*EXCERCISE 3.1*/

//#include <iostream>
//using namespace std;
//int power(int x, int n) {
//    if (n == 0) {
//        return 1;
//    }
//    else {
//        return x * power(x, n - 1);
//    }
//}
//int main() {
//    int x = 2;
//    cout << "n\t2^n" << endl;
//    for (int n = 0; n <= 20; n++) {
//        cout << n << "\t" << power(x, n) << endl;
//    }
//
//    return 0;
//}
 

                             /*EXCERCISE 3.2*/


//#include<iostream>
//using namespace std;
//int ackermann(int m, int n) {
//    if (m == 0) {
//        return(n + 1);
//    }
//    else if (m > 0 && n == 0) {
//        return (ackermann(m - 1, 1));
//    }
//    else if (m > 0 && n > 0) {
//        return (ackermann(m - 1, ackermann(m, n - 1)));
//    }
//}
//int main() {
//    int m = 3, n = 4;
//    cout << "Ackermann(" << m << ", " << n << ") = " << ackermann(m, n) << endl;
//    return 0;
//}
//


                                /*EXCERCISE 3.3*/
              //A) Recursive Function to Print Numbers from n to 0//
//
//#include <iostream>
//using namespace std;
//
//void printNum(int n) {
//    if (n < 0) 
//     return;
//    cout << n << " , ";
//    printNum(n - 1);
//}
//
//int main() {
//    int n = 10;
//    printNum(n);
//    cout << endl;
//    return 0;
//}


              //B) Recursive Function to Compute Binomial Coefficients//

//#include <iostream>
//using namespace std;
//
//int binomialCoefficient(int n, int k) {
//    if (k == 0 || k == n)
//        return 1;
//    return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
//}
//
//int main() {
//    int n = 4, k = 3;
//    cout << "C(" << n << ", " << k << ") = " << binomialCoefficient(n, k) << endl;
//    return 0;
//}


                    //C) Function to Check if a Number is Prime//
//
//#include <iostream>
//using namespace std;
//
//bool isPrime(int n, int i = 2) {
//    if (n <= 1) return false;
//    if (n == 2) return true;
//    if (n % i == 0) return false;
//    if (i * i > n) return true;
//    return isPrime(n, i + 1);
//}
//
//int main() {
//    int n = 17;
//    if (isPrime(n)) {
//        cout << "Prime" << endl;
//    }
//    else {
//        cout << "Not Prime" << endl;
//    }
//    return 0;
//}
