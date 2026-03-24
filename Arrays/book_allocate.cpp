// book allocation problem

#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> arr, int n, int m, int sol){
    int studentCount = 1;
    int pageSum = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > sol){
            return false;
        }
        if(pageSum + arr[i] > sol){
            studentCount++;
            pageSum = arr[i];
            if(studentCount > m){
                return false;
            }
        }
        else{
            pageSum += arr[i];
        }
        
    }
    return true;
}

int allocateBooks(vector<int> arr, int n, int m) {
    int start = 0;
    int end = accumulate(arr.begin(), arr.end(), 0);
    int ans = -1;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(isPossible(arr, n, m, mid)){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return ans;
}

int main() {
    int n, m;
    cout << "Enter the number of books: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the number of pages in each book: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Enter the number of students: ";
    cin >> m;
    
    int result = allocateBooks(arr, n, m);
    if(result != -1){
        cout << "Minimum number of pages allocated to a student: " << result << endl;
    }
    else{
        cout << "Not possible to allocate books to students." << endl;
    }
    
    return 0;
}