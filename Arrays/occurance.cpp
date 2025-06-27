// Program to Find First and last occurance in an sorted array using binary search

#include<iostream>
 using namespace std; 

int firstOccurrence(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
                ans = mid;
                end = mid - 1;
            
        }
        else if (arr[mid] < key)
        {
            start = mid + 1; // Search in the right half
        }
        else
        {
            end = mid - 1; // Search in the left half
        }
    }

    return ans;
}
int lastOccurrence(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
                ans = mid;
                start = mid + 1;
            
        }
        else if (arr[mid] < key)
        {
            start = mid + 1; // Search in the right half
        }
        else
        {
            end = mid - 1; // Search in the left half
        }
    }

    return ans;
}

int main()
{
    int even[12] = {2, 4, 4, 14, 14, 14, 18, 18, 18, 18, 22, 24};
    int key = 18;
    int firstIndex = firstOccurrence(even, 12, key);

    cout<<"The First Occurance of the key is :"<<firstIndex<<endl;
  
    int lastIndex = lastOccurrence(even, 12, key);

    cout<<"The last Occurance of the key is :"<<lastIndex<<endl;
    return 0;
}