//Implementation of Bubble Sort in C++
// This code implements the bubble sort algorithm to sort an array of integers in ascending order.

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[5] = {5, 1, 4, 2, 8};
    bubbleSort(arr, 5);
    cout << "Sorted array: ";
    printArray(arr, 5);
    return 0;
}
