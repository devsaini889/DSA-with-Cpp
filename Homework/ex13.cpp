// 1047 Leetcode problem: Remove All Adjacent Duplicates In String
// Given a string s, a duplicate removal consists of choosing two adjacent and equal letters and removing them

#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;



 string removeDuplicates(string s) {
        string ans = "";
        int i = 0;
        while(i < s.length()){
            if(ans.length() > 0 && ans[ans.length()-1] == s[i]){
                ans.pop_back();
            }
            else{
                ans.push_back(s[i]);
            }
            i++;
        }
        return ans;
    }  

int main()
{    string s;
    cout << "Enter the string: ";
    cin >> s;
    
    string result = removeDuplicates(s);
    cout << "The string after removing all adjacent duplicates is: " << result << endl;
    
    return 0;
}