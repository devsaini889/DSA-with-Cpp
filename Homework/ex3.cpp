// Find the Missing Elements from an Array with duplicates

#include<iostream>
using namespace std;

void findMissing(int *a, int n)
{
    //visited method
    // for(int i=0; i<n; i++)
    // {
    //     int index = abs(a[i]) - 1;
    //     if(a[index] > 0)
    //     {
    //         a[index] = -a[index];
    //     }
    // }
    // for(int i=0; i<n; i++)
    // {
    //     if(a[i] > 0)
    //     {
    //         cout<<i+1<<" ";
    //     }
    // }

    // Sorting and swapping method
    for(int i=0; i<n; i++)
    {
        if(a[i] != i+1)
        {
            if(a[i] == a[a[i]-1])
            {
                break;
            }
            swap(a[i],a[a[i]-1]);
            i--;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(a[i] != i+1)
        {
            cout<<i+1<<" ";
        }
    }
    cout<<endl;
}
int main()
{
    int n;
    int a[] = {1,3,5,3,4};
    n = sizeof(a)/sizeof(int);
    findMissing(a,n);
return 0;
}