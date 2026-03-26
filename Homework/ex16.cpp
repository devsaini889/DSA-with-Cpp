539 Leetcode problem: Minimum Time Difference
Given a list of 24-hour clock time points in "HH:MM" format, return the minimum minutes difference between any two time points in the list.

#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;



int findMinDifference(vector<string>& timePoints) {
    vector<int> minutes;

    for(int i = 0; i < timePoints.size(); i++){
        string curr = timePoints[i];

        int hours = stoi(curr.substr(0,2));
        int mins = stoi(curr.substr(3,2));
        int totalMinutes = hours * 60 + mins;
        minutes.push_back(totalMinutes);
    }

    sort(minutes.begin(), minutes.end());

    int mini = INT_MAX;
    int n = minutes.size();

    // Adjacent difference
    for(int i = 0; i < n - 1; i++){
        mini = min(mini, minutes[i+1] - minutes[i]);
    }

    // Circular difference (IMPORTANT FIX)
    int circularDiff = (minutes[0] + 1440) - minutes[n-1];
    mini = min(mini, circularDiff);

    return mini;
}


int main()  
{    int n;
    cout << "Enter the number of time points: ";
    cin >> n;
    
    vector<string> timePoints(n);
    cout << "Enter the time points in HH:MM format:" << endl;
    for(int i = 0; i < n; i++){
        cin >> timePoints[i];
    }
    
    int result = findMinDifference(timePoints);
    cout << "The minimum minutes difference between any two time points is: " << result << endl;
    
    return 0;
}