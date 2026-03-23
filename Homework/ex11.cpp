// Leetcode Problem - 532 K-diff Pairs in an Array url ==> https://leetcode.com/problems/k-diff-pairs-in-an-array/description/

// ==> 1 . Brute Force Approach

#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;

// int findPairs(vector<int>& nums, int k) {
//         int count = 0;
//         for(int i = 0; i < nums.size(); i++){
//             for(int j = i + 1; j < nums.size(); j++){
//                 if(abs(nums[i] - nums[j]) == k){
//                     count++;
//                     break; // To avoid counting duplicates
//                 }
//             }
//         }
//         return count;
//     }


// int main()
// {
//     int n, k;
//     cout << "Enter the number of elements in the array: ";
//     cin >> n;
//     vector<int> nums(n);
//     cout << "Enter the elements of the array: ";
//     for(int i = 0; i < n; i++){
//         cin >> nums[i];
//     }
//     cout << "Enter the value of k: ";
//     cin >> k;
    
//     int result = findPairs(nums, k);
//     cout << "The number of unique k-diff pairs is: " << result << endl;
    
//     return 0;
// }



// ==> 2 . two pointer approach

// int findPairs(vector<int>& nums, int k) {
//         sort(nums.begin(), nums.end());
//         set<pair<int, int>> ans;
//         int i = 0, j = 1;
//         while(j < nums.size()){
//             int diff = nums[j] - nums[i];
//             if(diff == k){
//                 ans.insert({nums[i], nums[j]});
//                 i++;
//                 j++;
//             } else if(diff > k){
//                 i++;
//             } else {
//                 j++;
//             }
//             if(i == j){
//                 j++;
//             }
//         }
//         return ans.size();

//     }
// int main()
// {    int n, k;
//     cout << "Enter the number of elements in the array: ";
//     cin >> n;
//     vector<int> nums(n);
//     cout << "Enter the elements of the array: ";
//     for(int i = 0; i < n; i++){
//         cin >> nums[i];
//     }
//     cout << "Enter the value of k: ";
//     cin >> k;
    
//     int result = findPairs(nums, k);
//     cout << "The number of unique k-diff pairs is: " << result << endl;
    
//     return 0;
// }

// ==> 3 . optimal Approach

int bs(vector<int>& nums, int target, int start){
    int s = start;
    int e = nums.size() - 1;
    while(s <= e){
        int mid = s + (e - s) / 2;
        if(nums[mid] == target){
            return mid;
        } else if(nums[mid] < target){
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return -1;
}
int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        set<pair<int, int>> ans;
        for(int i = 0; i < nums.size(); i++){
            if(bs(nums, nums[i] + k, i + 1) != -1){
                ans.insert({nums[i], nums[i] + k});
            }
        }
        return ans.size();
    }

int main()
{    int n, k;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    cout << "Enter the value of k: ";
    cin >> k;
    
    int result = findPairs(nums, k);
    cout << "The number of unique k-diff pairs is: " << result << endl;
    
    return 0;
}