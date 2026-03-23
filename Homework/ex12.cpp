// leetcode 658 Find K Closest Elements url ==> https://leetcode.com/problems/find-k-closest-elements/description/

// using two pointer approach
#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;

vector<int> twoptrmethod(vector<int>& arr, int k, int x) {
        int s = 0;
        int e = arr.size() - 1;
        while(e - s >= k){
            int diff1 = abs(arr[s] - x);
            int diff2 = abs(arr[e] - x);
            if(diff1 > diff2){
                s++;
            } else {
                e--;
            }
        }
        vector<int> ans;
        for(int i = s; i <= e; i++){
            ans.push_back(arr[i]);
        }
        return ans;
    }


int main()
{    int n, k, x;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Enter the value of k: ";
    cin >> k;
    cout << "Enter the value of x: ";
    cin >> x;
    
    vector<int> result = twoptrmethod(arr, k, x);
    cout << "The k closest elements to x are: ";
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    cout << endl;
    
    return 0;
}   