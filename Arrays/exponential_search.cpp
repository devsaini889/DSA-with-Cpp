//Exponential Search in C++
#include <iostream>
using namespace std;    

int binarySearch(int arr[], int left, int right, int x) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == x) {
            return mid;
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return -1; // Element not found
}
int exponentialSearch(int arr[], int n, int x) {
    if (arr[0] == x) {
        return 0;
    }
    
    int i = 1;
    while (i < n && arr[i] <= x) {
        i *= 2;
    }
    return binarySearch(arr, i / 2, min(i, n - 1), x);
}
int main() {
    int n, x;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array (sorted): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the element to search: ";
    cin >> x;
    
    int result = exponentialSearch(arr, n, x);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    
    return 0;
}