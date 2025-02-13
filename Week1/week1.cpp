
                              /*   EXAMPLE 1.2:A COMPLEX NUMBER CLASS*/



//#include <iostream>
//#include <cmath>
//using namespace std;
//
//class Complex {
//private:
//    float re;  
//public:
//    float im;  
//
//    // Constructor for Complex number with real and imaginary parts
//    Complex(float r, float i) : re(r), im(i) {}
//
//    // Constructor for Complex number with only real part
//    Complex(float r) : re(r), im(0) {}
//
//    // Destructor
//    ~Complex() {}
//
//    
//    double Magnitude() {
//        return sqrt(re * re + im * im);
//    }
//
//    
//    float Real() const { return re; }
//
//    
//    float Imag() const { return im; }
//
//    // Overloaded + operator to add two Complex numbers
//    Complex operator+(const Complex& b) {
//        return Complex(re + b.re, im + b.im);
//    }
//
//    // Overloaded = operator for assignment
//    Complex& operator=(const Complex& b) {
//        if (this != &b) {  // Avoid self-assignment
//            re = b.re;
//            im = b.im;
//        }
//        return *this;
//    }
//};
//
//int main() {
//    Complex a(1.0, 1.0);  // Create complex number a with real=1.0, imaginary=1.0
//    Complex* b = new Complex(5.0);  // Create complex number b with real=5.0, imaginary=0.0
//    Complex c(0.0, 0.0);  // Create complex number c with real=0.0, imaginary=0.0
//
//    // Output values of complex number a
//    cout << "a real = " << a.Real() << ", a imaginary = " << a.Imag() << endl;
//
//    // Output values of complex number b
//    cout << "b real = " << b->Real() << ", b imaginary = " << b->Imag() << endl;
//
//    // Add a and b, and store result in c
//    c = a + *b;
//
//    // Output values of complex number c
//    cout << "c real = " << c.Real() << ", c imaginary = " << c.Imag() << endl;
//
//    // Delete dynamically allocated memory for b
//    delete b;
//
//    return 0;
//}

                                    /*EXCERCIE 1.1*/

//#include <iostream>
//#include <cmath>
//using namespace std;
//
//class Complex {
//private:
//    float re;  
//public:
//    float im;  
//
//    // Constructor for Complex number with real and imaginary parts
//    Complex(float r, float i) : re(r), im(i) {}
//
//    // Constructor for Complex number with only real part
//    Complex(float r) : re(r), im(0) {}
//
//    // Destructor
//    ~Complex() {}
//    
//    float Real() const { return re; }
//
//    
//    float Imag() const { return im; }
//
//    // Overloaded * operator to add two Complex numbers
//    Complex operator*(const Complex& b) const {
//        float realPart = (re * b.re) - (im * b.im);
//        float imagPart = (re * b.im) + (im * b.re);
//        return Complex(realPart, imagPart);
//    }
//
//    // Overloaded = operator for assignment
//    Complex& operator=(const Complex& b) {
//        if (this != &b) {  // Avoid self-assignment
//            re = b.re;
//            im = b.im;
//        }
//        return *this;
//    }
//};
//
//int main() {
//    Complex a(2, 3);  
//    Complex *b = new Complex(5);  
//    Complex c(0.0, 0.0);  
//
//    
//    cout << "a real = " << a.Real() << ", a imaginary = " << a.Imag() << endl;
//
//    
//    cout << "b real = " << b->Real() << ", b imaginary = " << b->Imag() << endl;
//
//   
//    cout << "c real = " << c.Real() << ", c imaginary = " << c.Imag() << endl;
//
//    c = a *  *b;
//
//    cout << "c (after multiplication) real = " << c.Real() << ", c imaginary = " << c.Imag() << endl;
//
//    return 0;
//}  



                      //Example 1.3: Defining and calling a function template
//
//#include <iostream>
//using namespace std;
//
//// Function template to return the maximum of two values
//template <class T>
//T GetMax(T a, T b) {
//    T result;
//    result = (a > b) ? a : b; // If a is greater than b, assign a to result, otherwise assign b
//    return result; 
//}
//
//int main() {
//    int i = 5, j = 6, k;   // Declare two integers i and j
//    long L = 10, m = 5, n;  // Declare two long integers L and m
//
//    k = GetMax<int>(i, j);  
//    n = GetMax<long>(L, m); 
//
//    cout << k << endl;  
//    cout << n << endl;  
//
//    return 0; 
//}


  
                   /* Example 1.4: Defining and using a class template*/

//#include <iostream>
//using namespace std;
//
//
//template <class T>
//class mypair {
//    T a, b;  // Declare two variables of type T
//
//public:
//    // Constructor to initialize the pair of values
//    mypair(T first, T second) {
//        a = first;
//        b = second;
//    }
//
//    // Function to return the maximum of the two values
//    T getmax();
//};
//
//// Definition of the getmax function outside the class
//template <class T>
//T mypair<T>::getmax() {
//    T retval;
//    retval = a > b ? a : b;  // Return the greater of a and b
//    return retval;
//}
//
//int main() {
//    mypair<int> myobject(100, 75);  // Create an object of mypair with int type
//
//    cout << myobject.getmax();  
//
//    return 0;
//}
   
                             /* EXCERCISE 1.2*/
//
// #include <iostream>
//using namespace std;
//
//
//template <class T>
//class mypair {
//    T a, b;  // Declare two variables of type T
//
//public:
//    // Constructor to initialize the pair of values
//    mypair(T first, T second) {
//        a = first;
//        b = second;
//    }
//
//    // Function to return the minimum of the two values
//    T getmin();
//};
//
//// Definition of the getmin function outside the class
//template <class T>
//T mypair<T>::getmin() {
//    T retval;
//    retval = a < b ? a : b;  // Return the lesser of a and b
//    return retval;
//}
//
//int main() {
//    mypair<int> myobject(100, 75);  // Create an object of mypair with int type
//
//    cout << myobject.getmin();  
//
//    return 0;
//} 
                                      
                        /* Example 1.5: Defining and using a class template*/

//#include <iostream>  
//using namespace std;  
//
//// Template class definition, where T is any datatype and N is the size of the array
//template <class T, int N>
//class mysequence
//{
//    T memblock[N];  // Declare an array 'memblock' that can store N elements of type T
//
//public:
//    void setmember(int x, T value);  // Function to set the value at index x of the array
//    T getmember(int x);  // Function to get the value at index x of the array
//};
//
//// Definition of setmember function to set the value at a specific index
//template <class T, int N>
//void mysequence<T, N>::setmember(int x, T value)
//{
//    memblock[x] = value;  // Store 'value' at the index 'x' in the array 'memblock'
//}
//
//// Definition of getmember function to get the value from a specific index
//template <class T, int N>
//T mysequence<T, N>::getmember(int x)
//{
//    return memblock[x];  // Return the value at index 'x' from the array 'memblock'
//}
//
//int main()  
//{
//    // Create an object 'myints' of type 'mysequence<int, 5>', an array of 5 integers
//    mysequence<int, 5> myints;
//
//    // Create an object 'myfloats' of type 'mysequence<double, 5>', an array of 5 doubles
//    mysequence<double, 5> myfloats;
//
//    // Set the value 100 at index 0 of 'myints' 
//    myints.setmember(0, 100);
//
//    // Set the value 3.1416 at index 3 of 'myfloats' 
//    myfloats.setmember(3, 3.1416);
//
//    
//    cout << myints.getmember(0) << '\n';
//
//    
//    cout << myfloats.getmember(3) << '\n';
//
//    return 0;  
//}
  
                                    /* EXCERCISE 1.3*/
 
//#include <iostream>  
//
//using namespace std;  
//
//// Template class definition, where T is any datattpe and N is the size of the array
//template <class T, int N>
//class mysequence
//{
//    T memblock[N];  // Declare an array 'memblock' that can store N elements of type T
//
//public:
//    void setmember(int x, T value);  // Function to set the value at index x of the array
//    T getmember(int x);  // Function to get the value at index x of the array
//    T findMin();  
//    T findMax();  
//};
//
//// Definition of setmember function to set the value at a specific index
//template <class T, int N>
//void mysequence<T, N>::setmember(int x, T value)
//{
//    memblock[x] = value;  // Store 'value' at the index 'x' in the array 'memblock'
//}
//
//// Definition of getmember function to get the value from a specific index
//template <class T, int N>
//T mysequence<T, N>::getmember(int x)
//{
//    return memblock[x];  // Return the value at index 'x' from the array 'memblock'
//}
//
//// Definition of findMin function to find the minimum value in the array
//template <class T, int N>
//T mysequence<T, N>::findMin()
//{
//    T min_value = memblock[0];  // Start by assuming the first element is the minimum
//    for (int i = 1; i < N; i++)  // Loop through the array starting from the second element
//    {
//        if (memblock[i] < min_value)  // If the current element is smaller than the current minimum
//        {
//            min_value = memblock[i];  // Update the minimum value
//        }
//    }
//    return min_value;  // Return the smallest value found in the array
//}
//
//// Definition of findMax function to find the maximum value in the array
//template <class T, int N>
//T mysequence<T, N>::findMax()
//{
//    T max_value = memblock[0];  // Start by assuming the first element is the maximum
//    for (int i = 1; i < N; i++)  // Loop through the array starting from the second element
//    {
//        if (memblock[i] > max_value)  // If the current element is larger than the current maximum
//        {
//            max_value = memblock[i];  // Update the maximum value
//        }
//    }
//    return max_value;  // Return the largest value found in the array
//}
//
//int main()  
//{
//    // Create an object 'myints' of type 'mysequence<int, 5>', an array of 5 integers
//    mysequence<int, 5> myints;
//
//    // Create an object 'myfloats' of type 'mysequence<double, 5>', an array of 5 doubles
//    mysequence<double, 5> myfloats;
//
//    // Set the value 100 at index 0 of 'myints' (integer array)
//    myints.setmember(0, 100);
//
//    // Set the value 200 at index 1 of 'myints'
//    myints.setmember(1, 200);
//
//    // Set the value 50 at index 2 of 'myints'
//    myints.setmember(2, 50);
//
//    // Set the value 150 at index 3 of 'myints'
//    myints.setmember(3, 150);
//
//    // Set the value 75 at index 4 of 'myints'
//    myints.setmember(4, 75);
//
//    // Set the value 1.618 at index 0 of 'myfloats'
//    myfloats.setmember(0, 1.618);
//
//
//    // Set the value 3.1416 at index 1 of 'myfloats' (double array)
//    myfloats.setmember(1, 3.1416);
//
//    
//    // Set the value 2.718 at index 2 of 'myfloats'
//    myfloats.setmember(2, 2.718);
//
//    // Set the value 1.414 at index 3 of 'myfloats'
//    myfloats.setmember(3, 1.414);
//
//    // Set the value 2.236 at index 4 of 'myfloats'
//    myfloats.setmember(4, 2.236);
//
//    // Print the value at index 0 of 'myints', which is 100
//    cout << "myints[0]: " << myints.getmember(0) << '\n';
//
//    // Print the value at index 3 of 'myfloats', which is 1.414
//    cout << "myfloats[3]: " << myfloats.getmember(3) << '\n';
//
//    // Print the minimum value in the 'myints' array
//    cout << "Minimum value in myints: " << myints.findMin() << '\n';
//
//    // Print the maximum value in the 'myints' array
//    cout << "Maximum value in myints: " << myints.findMax() << '\n';
//
//    // Print the minimum value in the 'myfloats' array
//    cout << "Minimum value in myfloats: " << myfloats.findMin() << '\n';
//
//    // Print the maximum value in the 'myfloats' array
//    cout << "Maximum value in myfloats: " << myfloats.findMax() << '\n';
//
//    return 0; 
//}
                              
                       /* Example 1.6:To count number of characters in a text file*/


//#include <iostream>
//#include <fstream>
//
//using namespace std;
//
//int main(void)
//{
//    // Create an output file stream and an input file stream
//    ofstream outFile;
//    outFile.open("fout.txt");  // Open output file "fout.txt"
//
//    ifstream inFile("fin.txt");  // Open input file "fin.txt"
//
//    // Check if the input file was opened successfully
//    if (!inFile) {
//        cerr << "Unable to open the input file." << endl;
//        return 1;
//    }
//
//    char ch;
//    int count = 0;
//
//    // Read each character from the input file
//    while (inFile.get(ch)) {
//        outFile << ch;  // Write the character to the output file
//        count++;         // Increment the character count
//    }
//
//    // Write the character count to the output file
//    outFile << "\n\nCharacter count = " << count << endl;
//
//    // Close the files
//    inFile.close();
//    outFile.close();
//
//    return 0;
//}


                                       /* EXCERCISE 1.4*/

//#include <iostream>
//#include <fstream>
//#include <cctype>  // For checking characters
//
//using namespace std;
//
//int main(void)
//{
//    
//    ofstream outFile;
//    outFile.open("fout.txt");  // Open output file "fout.txt"
//
//    ifstream inFile("fin.txt");  // Open input file "fin.txt"
//
//
//    char ch;
//    int countChars = 0;
//    int countWords = 0;
//    int countSentences = 0;
//
//    bool inWord = true;  // To help count words
//
//    // Read each character from the input file
//    while (inFile.get(ch)) {
//        outFile << ch;  // Write the character to the output file
//        countChars++;    // Increment the character count
//
//        // Count sentences
//        if (ch == '.' || ch == '!' || ch == '?') {
//            countSentences++;
//        }
//
//        // Count words (transition from non-letter to letter indicates a word)
//        if (isalpha(ch)) {  // If character is a letter
//            if (!inWord) {
//                countWords++;  // We are starting a new word
//                inWord = true;
//            }
//        }
//        else {
//            inWord = false;  // Not a letter, so we are not in a word
//        }
//    }
//
//    // Write the character, word, and sentence counts to the output file
//    outFile << "\n\nCharacter count = " << countChars << endl;
//    outFile << "Word count = " << countWords << endl;
//    outFile << "Sentence count = " << countSentences << endl;
//
//    // Close the files
//    inFile.close();
//    outFile.close();
//
//    return 0;
//}
//
 
                                      /*  EXAMPLE 1.7*/
//#include <iostream>
//#include <fstream>
//
//using namespace std;
//
//int main() {
//    char name[10];
//    float mt1, mt2, final, avg;
//
//    ifstream fin;  // Create file input stream object
//    ofstream fout; // Create file output stream object
//
//    fin.open("input.dat");  // Open input file
//    fout.open("output.dat"); // Open output file
//
//    while (fin >> name >> mt1 >> mt2 >> final) {  // Read data from input file
//        avg = 0.25 * mt1 + 0.25 * mt2 + 0.5 * final;  // Calculate average
//        fout << name << '\t' << avg << endl;  // Write result to output file
//    }
//
//    fin.close();  // Close input file
//    fout.close(); // Close output file
//
//    return 0;
//}


                                           /*EXCERCISE 1.5*/

//#include <iostream>
//#include <string>
//using namespace std;
//
//class House {
//private:
//    string owner;      
//    string address;    
//    int bedrooms;      
//    float price;      
//
//public:
//    // Function to input values for the house
//    void readvalues() {
//        
//        cout << "Enter owner: ";
//        getline(cin, owner);
//        cout << endl;
//
//        
//        cout << "Enter address: ";
//        cin.ignore();   // To clear any leftover newline character in the input buffer
//        getline(cin, address);
//
//        
//        cout << "Number of bedrooms: ";
//        cin >> bedrooms;
//
//        
//        cout << "Enter price: ";
//        cin >> price;
//        cout << endl;
//    }
//
//    // Function to print details of the house
//    void print() {
//        // Output house information in a tabular format
//        cout << owner << "\t" << address << "\t" << bedrooms << "\t" << price << endl;
//    }
//};
//
//
//int main() {
//    // Array to store up to 100 House objects
//    House available[100];
//    char choice;    // To store user's choice for continuing or stopping input
//    int count = 0;  // To keep track of how many houses have been entered
//
//    // Loop to input house details
//    do {
//        // Call readvalues() to input data for each house
//        available[count].readvalues();
//        count++;  // Increment the count of entered houses
//
//        // If limit of 100 houses is reached, exit the loop
//        if (count >= 100) {
//            cout << "House limit reached." << endl;
//            break;
//        }
//
//        // Ask user if they want to continue adding houses
//        cout << "Do you want to continue? (Y/N): ";
//        cin >> choice;
//
//        // Convert choice to uppercase to handle both 'y' and 'Y'
//        choice = toupper(choice);
//
//    } while (choice == 'Y');  // Continue if user presses 'Y' or 'y'
//
//    // Print the header of the table
//    cout << "Owner\tAddress\tBedrooms\tPrice" << endl;
//    cout << "------------------------------------------------" << endl;
//
//    // Print the details of all entered houses
//    for (int i = 0; i < count; i++) {
//        available[i].print();  // Call the print function for each house
//    }
//
//    return 0;  
//}
//
   

                                               /*EXCERCISE 1.6*/

//#include <iostream>
//#include <fstream>
//#include <iomanip>
//#include <string>
//
//using namespace std;
//
//class Student {
//private:
//    char name[30];
//    int grades[10];
//    float average;
//
//public:
//    // Reads data from file and calculates the average
//    void readData(ifstream& file, int numGrades) {
//        file.ignore();
//        file.getline(name, 30);
//
//        int sum = 0;
//        for (int i = 0; i < numGrades; i++) {
//            file >> grades[i];
//            sum += grades[i];
//        }
//        average = static_cast<float>(sum) / numGrades;
//    }
//
//    // Displays student's name, grades, and average
//    void display(int numGrades) const {
//        cout << left << setw(15) << name;
//        for (int i = 0; i < numGrades; i++) {
//            cout << setw(5) << grades[i];
//        }
//        cout << setw(10) << fixed << setprecision(2) << average << endl;
//    }
//
//    // Returns the average grade
//    float getAverage() const {
//        return average;
//    }
//
//    // Returns the student's name
//    string getName() const {
//        return string(name);
//    }
//};
//
//int main() {
//    string filename;
//    cout << "Enter the filename: ";
//    cin >> filename;
//
//    ifstream file(filename);
//    if (!file) {
//        cerr << "Error opening file!" << endl;
//        return 1;
//    }
//
//    int numStudents, numGrades;
//    if (!(file >> numStudents >> numGrades) || numStudents <= 0 || numGrades <= 0) {
//        cerr << "Invalid input data!" << endl;
//        return 1;
//    }
//
//    // Error handling for too many students
//    if (numStudents > 10000) {
//        cerr << "Too many students! Limit is 10,000." << endl;
//        return 1;
//    }
//
//    Student* students = nullptr;
//    try {
//        students = new Student[numStudents];
//    }
//    catch (bad_alloc& e) {
//        cerr << "Memory allocation failed: " << e.what() << endl;
//        return 1;
//    }
//
//    // Read data for each student
//    for (int i = 0; i < numStudents; i++) {
//        students[i].readData(file, numGrades);
//    }
//
//    file.close();
//
//    // Display header
//    cout << "\nStudent Grades:\n";
//    cout << left << setw(15) << "Name";
//    for (int i = 1; i <= numGrades; i++) {
//        cout << setw(5) << "G" + to_string(i);
//    }
//    cout << setw(10) << "Average" << endl;
//    cout << string(50, '-') << endl;
//
//    // Display student details
//    for (int i = 0; i < numStudents; i++) {
//        students[i].display(numGrades);
//    }
//
//    // Calculate class average, highest and lowest averages
//    float classSum = 0, highest = students[0].getAverage(), lowest = students[0].getAverage();
//    string highestName = students[0].getName(), lowestName = students[0].getName();
//
//    for (int i = 0; i < numStudents; i++) {
//        float avg = students[i].getAverage();
//        classSum += avg;
//        if (avg > highest) {
//            highest = avg;
//            highestName = students[i].getName();
//        }
//        if (avg < lowest) {
//            lowest = avg;
//            lowestName = students[i].getName();
//        }
//    }
//
//    float classAverage = classSum / numStudents;
//
//    // Display class statistics
//    cout << "\nClass Average: " << fixed << setprecision(2) << classAverage << endl;
//    cout << "Highest Average: " << highest << " (Student: " << highestName << ")\n";
//    cout << "Lowest Average: " << lowest << " (Student: " << lowestName << ")\n";
//
//    // Display students below the class average
//    cout << "\nStudents below class average:\n";
//    for (int i = 0; i < numStudents; i++) {
//        if (students[i].getAverage() < classAverage) {
//            cout << students[i].getName() << endl;
//        }
//    }
//
//    // Free dynamically allocated memory
//    delete[] students;
//
//    return 0;
//}
