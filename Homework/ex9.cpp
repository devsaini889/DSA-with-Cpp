// GFG Problem ==> Add two numbers represented by two arrays url ==> https://www.geeksforgeeks.org/problems/add-two-numbers-represented-by-two-arrays2408/1


#include <bits/stdc++.h>
#include<vector>
#include<iostream>
#include<string>
using namespace std;

string calc_Sum(vector<int>& arr1, vector<int>& arr2) {
        // Complete the function
        int carry = 0;
        string ans;
        int i = arr1.size()-1;
        int j = arr2.size()-1;
        
        while(i>=0 && j>=0){
            int x = arr1[i]+arr2[j]+carry;
            int digit = x % 10;
            ans.push_back(digit + '0');
            carry = x / 10;
            i--,j--;
        }
        
        while(i>=0){
            int x = arr1[i]+0+carry;
            int digit = x % 10;
            ans.push_back(digit + '0');
            carry = x / 10;
            i--;
        
        }
        
        
        while(j>=0){
            int x = 0+arr2[j]+carry;
            int digit = x % 10;
            ans.push_back(digit + '0');
            carry = x / 10;
            j--;
        }
        
        if(carry){
            ans.push_back(carry +'0');
        }
        
        while(ans[ans.size()-1] == '0'){
            ans.pop_back();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
        
    }
    
int main()
{
    vector<int>arr1 = {1,2,3};
    vector<int>arr2 = {4,5,6};
    string ans = calc_Sum(arr1,arr2);
    cout<<ans<<endl;
return 0;
}