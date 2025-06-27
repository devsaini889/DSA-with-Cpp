//Finding the maximum and minimum element in an array


#include<iostream>
#include<climits> 
using namespace std;

int max(int num[], int n)
{       
    int maxx = INT_MIN;
    
    for(int i = 0; i<n ;i++){
        
        maxx = max(maxx, num[i]);
        // if(num[i]>maxx){
        //     maxx = num[i];
        // }
    }
    return maxx;
}

int min(int num[], int n)
{       
    int mini = INT_MAX;
    
    
    for(int i = 0; i<n ;i++){
       
        mini = min(mini, num[i]);

        // if(num[i]<mini){
        //     mini = num[i];
        // }
    }
    return mini;
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
    cout << "Maximum: " << max(Num, size) << endl;
    cout << "Minimum: " << min(Num, size) << endl;
    return 0;
}