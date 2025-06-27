// Finding the unique element in an array
/*Sample Input 1:
1
7
2 3 1 6 3 6 2
Sample Output 1:
1
Explanation: The array is [2, 3, 1, 6, 3, 6, 2]. Here, the numbers 2, 3, and 6 are present twice, and the number 1 is present only once. So, the unique number in this array is 1.
Sample Input 2:
2
5
2 4 7 2 7
9
1 3 1 3 6 6 7 10 7
Sample Output 2:
4
Explanation: In the first test case, the array is [2, 4, 7, 2, 7]. Here, the numbers 2 and 7 are present twice, and the number 4 is present only once. So, the unique number in this array is 4.

10
Explanation: In the second test case, the array is [1, 3, 1, 3, 6, 6, 7, 10, 7]. Here, the numbers 1, 3, 6, and 7 are present twice, and the number 10 is present only once. So, the unique number in this array is 10.*/


#include<iostream>
using namespace std;

int findUnique(int *arr, int size)
{
   
    int ans = 0;
    for(int i = 0 ; i<size; i++){
        ans = ans^arr[i];

    }
    return ans;
}

int main()
{
    int t;
    cout << "Enter number of test cases: ";
    cin >> t;
    while (t--)
    {
        int n;
        cout << "Enter size of the array: ";
        cin >> n; 
        int arr[100];
        cout << "Enter elements of the array: ";
        for (int i = 0; i < n; i++)
        {   
            cin >> arr[i]; 
        }
        cout <<"The Unique Element is:"<< findUnique(arr, n) << endl; 
    }
    return 0;
}