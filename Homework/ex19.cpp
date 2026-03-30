// 917 leetcode problem: reverse only letters

#include <iostream>
#include <string>
using namespace std;


string reverseOnlyLetters(string s) {
        int l = 0 , h = s.size()-1;
        while(l<h){
            if(isalpha(s[l]) && isalpha(s[h])){
                swap(s[l],s[h]);
                l++,h--;
            }
            else if(!isalpha(s[l])){
                l++;
            }
            else{
                h--;
            }
        }
        return s;
    }


int main(){
    string s;
    cout << "Enter a string: ";
    cin >> s;
    string result = reverseOnlyLetters(s);
    cout << "The string after reversing only letters is: " << result << endl;
    return 0;
}