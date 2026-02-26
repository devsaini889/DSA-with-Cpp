// GFG Question = https://www.geeksforgeeks.org/problems/common-elements1132/1

// common elements in three sorted arrays using set 
#include<iostream>
#include<vector>
#include<set>
using namespace std;

vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
{    set<int> s;
    vector<int> ans;
    for(int i=0; i<n1; i++)
    {
        s.insert(A[i]);
    }
    for(int i=0; i<n2; i++)
    {
        if(s.find(B[i]) != s.end())
        {
            ans.push_back(B[i]);
            s.erase(B[i]);
        }
    }
    for(int i=0; i<n3; i++)
    {
        if(s.find(C[i]) != s.end())
        {
            ans.push_back(C[i]);
            s.erase(C[i]);
        }
    }
    return ans;
}
int main()
{
    int n1,n2,n3;
    int A[] = {1,5,10,20,40,80};
    int B[] = {6,7,20,80,100};
    int C[] = {3,4,15,20,30,70,80,120};
    n1 = sizeof(A)/sizeof(int);
    n2 = sizeof(B)/sizeof(int);
    n3 = sizeof(C)/sizeof(int);
    vector<int> ans = commonElements(A,B,C,n1,n2,n3);
    for(auto val : ans)
    {
        cout<<val<<" ";
    }
    cout<<endl;
return 0;
}   