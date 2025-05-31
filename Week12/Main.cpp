#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

// Sequential Search
int SequentialSearch(int x[], int n, int key, int& comparisons) {
    for (int i = 0; i < n; i++) {
        comparisons++;
        if (key == x[i])
            return i;
    }
    return -1;
}

// Binary Search
int BinarySearch(int x[], int n, int key, int& comparisons) {
    int low = 0, hi = n - 1;
    while (low <= hi) {
        int mid = (low + hi) / 2;
        comparisons++;
        if (key == x[mid])
            return mid;
        if (key < x[mid])
            hi = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

// To Generate random array
void GenerateArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        arr[i] = rand() % (n * 2);
}

int main() {
    srand(time(0));
    int sizes[] = { 10, 100, 1000, 5000, 10000, 20000, 50000 };
    cout << "N\tSeq(S)\tSeq(U)\tBin(S)\tBin(U)\n";

    for (int s = 0; s < 7; s++) {
        int N = sizes[s];
        int* arr = new int[N];

        // To Generate random array
        GenerateArray(arr, N);

        //  Pick a random element from the array to ensure successful search
        int key_success = arr[rand() % N];

        // Pick a key not in array to ensure unsuccessful search
        int key_fail = N * 3;

        // for Sequential Search
        int seqCompS = 0, seqCompU = 0;
        SequentialSearch(arr, N, key_success, seqCompS);
        SequentialSearch(arr, N, key_fail, seqCompU);

        // To Sort array for Binary Search
        sort(arr, arr + N);

        int binCompS = 0, binCompU = 0;
        BinarySearch(arr, N, key_success, binCompS);
        BinarySearch(arr, N, key_fail, binCompU);

        cout << N << "\t" << seqCompS << "\t" << seqCompU << "\t"
            << binCompS << "\t" << binCompU << "\n";

        delete[] arr;
    }

    return 0;
}
