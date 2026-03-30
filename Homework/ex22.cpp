// leetcode 205 isomorphic strings

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


 bool isIsomorphic(string s, string t) {
        int hash[256] = {0};
        bool istCharsMapped[256] ={0};

        for(int i = 0; i<s.size(); i++){
            if(hash[s[i]]==0 && istCharsMapped[t[i]] == 0){
                hash[s[i]] = t[i];
                istCharsMapped[t[i]] = true;
            }
        }
        
        for(int i = 0; i<s.size(); i++){
            if(char(hash[s[i]]) != t[i]){
                return false;
            }
        }
        return true;
    }

int main(){
    string s, t;
    cout << "Enter the first string: ";
    cin >> s;
    cout << "Enter the second string: ";
    cin >> t;
    
    bool result = isIsomorphic(s, t);
    if(result){
        cout << "The strings are isomorphic." << endl;
    } else {
        cout << "The strings are not isomorphic." << endl;
    }
    
    return 0;
}