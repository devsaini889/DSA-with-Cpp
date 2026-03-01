//Find missing element in an sorted array using binary search

#include<iostream>
using namespace std;

int missing(int arr[], int size)
{
    int s = 0;
    int e = size - 1;

    while(s <= e){
        int mid = s + (e - s) / 2;

        // Check if the missing element is on the left side
        if(arr[mid] != mid + 1){
            e = mid - 1;
        } else {
            // Otherwise, it's on the right side
            s = mid + 1;
        }
    }
    return s + 1; // The missing element is s + 1
}

int main()
{
    int arr[5] = {1, 2, 3, 5, 6}; // Missing element is 4
    int size = sizeof(arr) / sizeof(arr[0]);
    int missingElement = missing(arr, size);
    cout << "The missing element is: " << missingElement << endl;
    return 0;
}
