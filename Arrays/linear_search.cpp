// Final output: The program will output whether the element is found in the array and its index if it exists.

#include<iostream>
using namespace std;

bool linear_search(int arr[], int size, int num)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == num)
        {
            cout << "Element found at index: " << i << endl;
            return true;
        }
    }
    cout << "Element not found" << endl;
    return false;
}

int main()
{
    int arr[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 100};
    cout << "Enter the element to search: ";
    int num;
    cin >> num;
    bool found = linear_search(arr, 10, num);
    if(found)
    {
        cout << "Element " << num << " is present in the array." << endl;
    }
    else
    {
        cout << "Element " << num << " is not present in the array." << endl;
    }
    return 0;
}