// 647 Leetcode Problem : Palindromic Substrings
// Given a string s, return the number of palindromic substrings in it.

#include <vector>
#include <iostream>
using namespace std;



  int expandAroundIndex(string s , int i , int j){
        int count = 0;

        while(i >= 0 && j < s.length() && s[i] == s[j]){
            count++;
            i--;
            j++;
        }
        return count;        
    }
    int countSubstrings(string s) {
        int count = 0;
        int n = s.length();

        for (int i = 0; i<n ;i++){
            int oddAns = expandAroundIndex(s ,i ,i);
            count = count + oddAns;

            int evenAns = expandAroundIndex(s,i,i+1);
            count = count +evenAns;
        }
        return count;
    }

int main()
{    string s;
    cout << "Enter the string: ";
    cin >> s;
    
    int result = countSubstrings(s);
    cout << "The number of palindromic substrings in the string is: " << result << endl;
    
    return 0;
}