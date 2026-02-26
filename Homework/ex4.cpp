// Find First Repeating Element in an Array using Hashing (unordered map)
#include<iostream>
#include<unordered_map>
using namespace std;

void hashed(int *a, int n){
//     int hash[100] = {0};
//     for(int i=0; i<n; i++)
//     {
//         hash[a[i]]++;
//     }
//     for(int i=0; i<n; i++)
//     {
//         if(hash[a[i]] > 1)
//         {
//             cout<<a[i]<<" ";
//             break;
//         }
//     }
    unordered_map<int,int> hash;
    for(int i=0; i<n; i++)
    {
        hash[a[i]]++;
    }
    for(int i=0; i<n; i++)
    {
        if(hash[a[i]] > 1)
        {
            cout<<a[i]<<" ";
            break;
        }
    }
    cout<<endl;
}
int main()
{
    int n;
    int a[] = {1,5,3,4,3,5,6};
    n = sizeof(a)/sizeof(int);
   hashed(a,n);

return 0;
}