
// C++ program to implement insertion sort
// This code implements the insertion sort algorithm to sort an array of integers in ascending order.
#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[5] = {12, 11, 13, 5, 6};
    insertionSort(arr, 5);
    cout << "Sorted array: ";
    printArray(arr, 5);
    return 0;
}