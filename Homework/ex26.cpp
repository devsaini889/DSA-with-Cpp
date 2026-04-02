// 28 leetcode problem : find the index of the first occurrence in a string

#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;



int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();

        for(int i = 0; i<=n-m;i++){
            for(int j =0;j<m;j++){
                if(needle[j] != haystack[i+j]){
                    break;
                }
                if(j == m-1){
                    return i;
                }
            }
        }
        return -1;
        
    }

int main()
{    string haystack, needle;
    cout << "Enter the haystack string: ";
    cin >> haystack;
    cout << "Enter the needle string: ";
    cin >> needle;
    
    int result = strStr(haystack, needle);
    
    if(result != -1){
        cout << "Needle found at index: " << result << endl;
    } else {
        cout << "Needle not found in haystack." << endl;
    }
    
    return 0;
}