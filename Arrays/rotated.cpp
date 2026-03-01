// search in a rotated sorted array
// To search for an element in a rotated sorted array, we can first find the pivot index using the method described in the pivot.cpp file. Once we have the pivot index, we can determine which half of the array to search for the target element. If the target element is greater than or equal to the first element of the array, we search in the left half (from index 0 to pivot-1). Otherwise, we search in the right half (from index pivot to n-1). We can use binary search in the respective half to find the target element efficiently.

#include<iostream>
using namespace std;

int Pivot(int arr[], int n){
    int s = 0;
    int e = n - 1;

    while(s < e){
        int mid = s + (e - s) / 2;
        
        // If mid element is greater than last element, pivot is on right side
        if(arr[mid] > arr[e]){
            s = mid + 1;
        } else {
            // Otherwise, pivot is on left side (including mid)
            e = mid;
        }
    }
    return s;
}

int BinarySearch(int arr[], int s, int e, int target){
    while(s <= e){
        int mid = s + (e - s) / 2;
        if(arr[mid] == target){
            return mid;
        }
        if(arr[mid] < target){
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return -1; // Target not found
}

int Search(int arr[], int n, int target){
    int pivot = Pivot(arr, n);
    if(arr[pivot] == target){
        return pivot;
    }
    if(target >= arr[0]){
        return BinarySearch(arr, 0, pivot - 1, target);
    } else {
        return BinarySearch(arr, pivot, n - 1, target);
    }
}

int main()
{
    int arr[6] = {2, 8, 1, 17, 21, 31};
    int target = 17;
    int index = Search(arr, 6, target);
    if(index != -1){
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    return 0;
}   
