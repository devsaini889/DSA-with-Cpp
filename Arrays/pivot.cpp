// To find the pivot in a rotated sorted array, we can use a modified binary search.
// The pivot is the index of the smallest element in the array, which is the point where
// the array was rotated. The pivot can be found by comparing the middle element with the first element.
// If the middle element is greater than or equal to the first element, it means the pivot
// is in the right half of the array. Otherwise, it is in the left half.


#include<iostream>
using namespace std;

int Pivot(int arr[], int n){
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while(s < e){
        mid = s + (e - s) / 2;
        if(arr[mid] >= arr[0]){
            s = mid + 1; // Search in the right half
        } else {
            e = mid; // Search in the left half
        }
    }
    return s;
}

int main()
{
    int arr[5] = {3, 8, 10, 17, 1};
    cout << "Pivot index is: " << Pivot(arr, 6) << endl;
    return 0;
}