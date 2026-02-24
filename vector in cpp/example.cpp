#include<iostream>
#include<vector>
using namespace std;

int main()
{
    
    vector<int> arr ;
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;

        arr.push_back(1);
        arr.push_back(2);
        arr.push_back(3);
        arr.push_back(4);
        arr.push_back(5);
        arr.push_back(6);
        arr.push_back(7);
        arr.push_back(8);
        arr.push_back(9);
        arr.push_back(10);

    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr.push_back(11);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    

 return 0;
}