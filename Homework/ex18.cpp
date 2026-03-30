// 242 leetcode problem: valid anagrams

#include <iostream>
#include <string>
using namespace std;


bool isAnagram(string s, string t) {
        int freqTable[256] = {0};

        for(int i = 0; i < s.size(); i++){
            freqTable[s[i]]++;
        }
        

        
        for(int i = 0; i < t.size(); i++){
            freqTable[t[i]]--;
        }

        for(int i = 0; i < 256; i++){
            if(freqTable[i] != 0){
                return false;
            }
        }
        return true;
    }


int main(){
    string s, t;
    cout << "Enter two strings: ";
    cin >> s >> t;
    if(isAnagram(s, t)){
        cout << "The strings are anagrams." << endl;
    }
    else{
        cout << "The strings are not anagrams." << endl;
    }
    return 0;
}