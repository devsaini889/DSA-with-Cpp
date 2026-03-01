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

int main()
{
    int arr[6] = {2, 8, 1, 17,21, 31};
    cout << "Pivot index is: " << Pivot(arr, 6) << endl;
    return 0;
}