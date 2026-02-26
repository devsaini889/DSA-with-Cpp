// Leetcode Problem = https://leetcode.com/problems/find-the-duplicate-number/description/?envType=problem-list-v2&envId=array

// Find the Duplicate Number
#include<iostream>
using namespace std;

int findDuplicate(int nums[], int n)
{
 while(nums[0] != nums[nums[0]]){
        swap(nums[0],nums[nums[0]]);
    }
    return nums[0];
    }


int main()
{
    int n;
    int a[] = {1,3,4,2,2};
    n = sizeof(a)/sizeof(int);
    cout<<findDuplicate(a,n)<<endl;

 return 0;
}