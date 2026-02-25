// sorting negative and positive numbers in a vector and print the sorted vector.
// using Dutuch National Flag Algorithm

#include<iostream>
using namespace std;
#include<vector>

int main()
{
    vector<int> arr{-12,11,13,-5,6,-7,5,-3,-6};
    int l = 0;
    int h = arr.size()-1;
    
    while(l < h)
    {
        if(arr[l] < 0)
        {
            l++;
        }
        else if(arr[h] > 0)
        {
            h--;
        }
        else
        {
            swap(arr[l],arr[h]);
         
        }
    }
    for(auto val : arr)    {
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}