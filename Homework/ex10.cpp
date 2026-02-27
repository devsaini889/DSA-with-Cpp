//gfg Problem ==> Finding the factorial of large no url ==> https://www.geeksforgeeks.org/problems/factorials-of-large-numbers2508/1


#include <bits/stdc++.h>
#include<vector>
#include<iostream>
using namespace std;

vector<int> factorial(int n) {
        // code here
        vector<int>ans;
        ans.push_back(1);
        int carry = 0;
        for(int i = 2 ; i <=n ; i++){
            for(int j = 0 ; j < ans.size(); j++){
                int x = ans[j] * i + carry;
                ans[j] = x % 10;
                carry = x / 10;
            }
            while(carry){
                ans.push_back(carry%10);
                carry /= 10;
            }
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    vector<int>ans = factorial(n);
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i];
    }
    cout<<endl;
return 0;
}   