// 49 leetcode problem : Group Anagrams

#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;



  vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string> >mp;
        for(auto str:strs){
            string s = str;
            sort(s.begin(), s.end());
            mp[s].push_back(str);
        }

        vector<vector<string>>ans;
        for(auto it = mp.begin(); it!=mp.end();it++){
            ans.push_back(it->second);
        }
        return ans;
        
    }

int main()
{    int n;
    cout << "Enter the number of strings: ";
    cin >> n;
    
    vector<string> strs(n);
    cout << "Enter the strings:" << endl;
    for(int i = 0; i < n; i++){
        cin >> strs[i];
    }
    
    vector<vector<string>> result = groupAnagrams(strs);
    
    cout << "Grouped Anagrams:" << endl;
    for(const auto& group : result){
        for(const auto& str : group){
            cout << str << " ";
        }
        cout << endl;
    }
    
    return 0;
}