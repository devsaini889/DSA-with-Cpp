

#include<iostream>
using namespace std;
int PrintArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
 int sorted(int arr[], int size)
{
   int left = 0, right = size - 1;
   while(left < right){
    while(arr[left] == 0 && left < right) {
        left++;
    }
    while(arr[right] == 1 && left < right) {
        right--;
    }
    if(left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
   }
}

int main()
{   
    int arr[8] = {0, 1, 0, 1, 0, 1, 0, 1};
    sorted(arr, 8);
    PrintArray(arr, 8);
    return 0;
}