// 1910 Leetcode Problem : Remove All Occurrences of a Substring

#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;



 string removeOccurrences(string s, string part) {
        int pos = s.find(part);
        while(pos != string::npos){
            s.erase(pos,part.length());
            pos = s.find(part);
        }
        return s;
    }

int main()
{    string s, part;
    cout << "Enter the string: ";
    cin >> s;
    cout << "Enter the substring: ";
    cin >> part;
    
    string result = removeOccurrences(s, part);
    cout << "The string after removing all occurrences of the substring is: " << result << endl;
    
    return 0;
}