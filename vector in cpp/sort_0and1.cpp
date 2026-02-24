//sorting 0's and 1's in a vector and print the sorted vector.

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr{0,1,0,1,0,1,0,1};
    int start = 0;
    int end = arr.size()-1;
    int i = 0;
    while(i != end)
    {
        if(arr[i] == 0)
        {
            swap(arr[i],arr[start]);
            start++;
            i++;
        }
        else
        {
            swap(arr[i],arr[end]);
            end--;
        }
    }
    for(auto val : arr)
    {
        cout<<val<<" ";
    }
    cout<<endl;



 return 0;
}