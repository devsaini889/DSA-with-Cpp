// Implementation of Binary Search in C++
// This code implements a binary search algorithm to find an element in a sorted array.

#include<iostream>
using namespace std;

int Search(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    
    while (start <= end)
    {
        
        if (arr[mid] == key)
        {
            cout << "Element found at index: " << mid << endl;
            return mid; // Element found
        }
        else if (arr[mid] < key)
        {
            start = mid + 1; // Search in the right half
        }
        else
        {
            end = mid - 1; // Search in the left half
        }
        mid = start + (end - start) / 2;
    }
    
    cout << "Element not found" << endl;
    return -1; // Element not found
}

int main()
{
    int even[8] = {2, 4, 6, 8, 10, 12, 14, 16};
    int odd[7] = {1, 3, 5, 7, 9, 11, 13};

    Search(even, 8, 10);
    Search(odd, 7, 5);
    return 0;
}