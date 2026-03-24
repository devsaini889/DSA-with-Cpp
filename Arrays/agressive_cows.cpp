// Agressive cows problem

#include<iostream>
using namespace std;

bool isPossible(vector<int> &stalls, int k, int mid, int n){
    int cowCount = 1;
    int lastPos = stalls[0];
    
    for(int i = 1; i < n; i++){
        if(stalls[i] - lastPos >= mid){
            cowCount++;
            lastPos = stalls[i];
        }
        if(cowCount == k){
            return true;
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    int n = stalls.size();
    sort(stalls.begin(), stalls.end());
    int start = 0;
    int end = stalls[n-1] - stalls[0];
    int ans = -1;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(isPossible(stalls, k, mid, n)){
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
    int n, k;
    cout << "Enter the number of stalls: ";
    cin >> n;
    vector<int> stalls(n);
    cout << "Enter the positions of the stalls: ";
    for(int i = 0; i < n; i++){
        cin >> stalls[i];
    }
    cout << "Enter the number of cows: ";
    cin >> k;
    
    int result = aggressiveCows(stalls, k);
    if(result != -1){
        cout << "Largest minimum distance between cows: " << result << endl;
    }
    
    return 0;
}