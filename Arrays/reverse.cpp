// Linear search algorithm: The project implements a linear search algorithm to find an element in an array.

#include<iostream>
using namespace std;

int reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while(start <= end)
    {
        
        swap(arr[start], arr[end]);

    
        start++;
        end--;
    }
    return 0; 
}


int PrintArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}



int main()
{
    int arr[10] = {1,0,-2,-6,8,4,2,9,11,15};
    int brr[9] = {0,113,15,-4,-10,55,66,12,34};

    reverse(arr, 10);
    reverse(brr, 9);


    PrintArray(arr, 10);
    PrintArray(brr, 9);

    return 0;
}