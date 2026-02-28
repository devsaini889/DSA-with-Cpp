// Binary search in a nearly sorted array
#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        if (mid > 0 && arr[mid - 1] == target) {
            return mid - 1;
        }
        if (mid < arr.size() - 1 && arr[mid + 1] == target) {
            return mid + 1;
        }
        if (arr[mid] > target) {
            high = mid - 2;
        } else {
            low = mid + 2;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {5, 10, 30, 20, 40};
    int target = 20;
    cout << "Index of " << target << " is: " << binarySearch(arr, target) << endl;
    return 0;
}