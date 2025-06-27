


#include<iostream>
using namespace std;

int Swap(int arr[], int size)
{
    for(int i = 0; i < size - 1; i += 2)
    {
        swap(arr[i], arr[i + 1]);
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
    return 0;
}

int main()
{
    int even[8] = {5,9,1,6,8,2,4,3};
    int odd[7] = {9,12,22,34,75,11,6};

    Swap(even, 8);
    Swap(odd, 7);

    PrintArray(even, 8);
    PrintArray(odd, 7);

    return 0;
}