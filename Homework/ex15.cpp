// 680 leetcode problem : Valid Palindrome II
// Given a string s, return true if the s can be palindrome after deleting at most one character from it.

#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;

 bool checkPalindrome(string s , int i , int j){
        while(i <= j){
            if(s[i] != s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i =0;
        int j = s.length()-1;

        while(i <= j){
            if(s[i] != s[j]){
                return checkPalindrome(s,i+1,j) || checkPalindrome(s,i,j-1);
            }
            else{
                i++;
                j--;
            }
        }
        return true;

    }

int main()
{    string s;  
    cout << "Enter the string: ";
    cin >> s;
    
    bool result = validPalindrome(s);
    if(result){
        cout << "The string can be a palindrome after deleting at most one character." << endl;
    }
    else{
        cout << "The string cannot be a palindrome even after deleting one character." << endl;
    }
    
    return 0;
}