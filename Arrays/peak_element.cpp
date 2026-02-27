//Leetcode Problem ==>  Find Peak Element in a mountain Array url ==> https://leetcode.com/problems/peak-index-in-a-mountain-array/description/


#include <bits/stdc++.h>
#include<vector>
#include<iostream>
using namespace std;


int findPeakIndex(vector<int>arr){
        int s = 0;
        int e = arr.size()-1;
        int mid = s + (e-s)/2 ;

        while(s < e){
            if(arr[mid] < arr[mid+1]){
                s = mid+1;
            }
            else{
                e = mid;
            }
            mid = s + (e-s)/2;
        }
        return s;

    }
int main()
{    vector<int>arr = {0,1,0};
    cout<<"Peak Index is: "<<findPeakIndex(arr)<<endl;
    return 0;
}