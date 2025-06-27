// Finding the sum of elements in an array

#include<iostream>
using namespace std;

int sum(int arr[], int size)
{
    int total = 0;
    for(int i = 0; i < size; i++)
    {
        total += arr[i];
    }
    return total;
}


int main()
{
    int size;
    cin >> size;
    int Num[100];

    for(int i = 0; i < size; i++)
    {
        cin >> Num[i];
    }
    cout << "Sum of elements: " << sum(Num, size) << endl;
    
    return 0;
}