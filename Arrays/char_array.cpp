

#include<iostream>
using namespace std;

char toLowerCase(char ch)
{
    if(ch >= 'a' && ch <= 'z') {
        return ch;
    }
    else {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool CheckPalindrome(char arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while(start < end) {
        if(toLowerCase(arr[start]) != toLowerCase(arr[end])) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

void reverse(char arr[] , int n)
{
    int start = 0;
    int end = n - 1;

    while(start < end) {
        swap(arr[start++], arr[end--]);
    }
}

int getLength(char arr[])
{
    int count = 0;
    for(int i=0; arr[i] != '\0'; i++) {
        count++;
    }
    return count;
}

int main()
{
    char arr[100];
    cout<< "Enter a name: ";
    cin>> arr;
    cout<< "The name is: " << arr << endl;
    int len = getLength(arr);
    cout<< "The length of the name is: " << len << endl;
    cout<< "The name in reverse is: ";
    reverse(arr,len);
    cout << arr << endl;
    cout<<"Palindrome or Not "<< CheckPalindrome(arr, len)<<endl; 

    return 0;
}