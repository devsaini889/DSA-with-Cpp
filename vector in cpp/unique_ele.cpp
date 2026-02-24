// every element occurs twice except one element which occurs once. Find the unique element.

#include<iostream>
#include<vector>
using namespace std;

int findUnique(vector<int> arr)
{
    int res = 0;
    for(int i=0;i<arr.size();i++)
    {
        res = res^arr[i];
    }
    return res;
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int unique_element = findUnique(arr);
    cout<<unique_element<<endl;
    

 return 0;
}