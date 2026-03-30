// 14 leetcode problem: longest common prefix

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

 string longestCommonPrefix(vector<string>& strs) {
    //     string ans;
    //     int i = 0;
    //     while(true){
    //         char curr_ch = 0;
    //         for(auto str : strs){
    //             if(i >= str.size()){
    //                 curr_ch =0;
    //                 break;
    //             }

    //             if(curr_ch ==0){
    //                 curr_ch = str[i];
    //             }
    //             else if(str[i] != curr_ch){
    //                 curr_ch = 0;
    //                 break;
    //             }
    //         }
    //         if(curr_ch ==0){
    //             break;
    //         }
    //         ans.push_back(curr_ch);
    //         i++;
    //     }

    //     return ans;
    // }

    if(strs.empty()) return "";
        sort(strs.begin(), strs.end());
        string first=strs[0];
        string last=strs.back();
        int i=0;
        while(i<first.length() && i<last.length() && first[i]==last[i]) i++;

        return first.substr(0,i);
        
    }

int main(){
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;
    vector<string> strs(n);
    cout << "Enter the strings: ";
    for(int i = 0; i < n; i++){
        cin >> strs[i];
    }
    string result = longestCommonPrefix(strs);
    cout << "The longest common prefix is: " << result << endl;
    return 0;
}