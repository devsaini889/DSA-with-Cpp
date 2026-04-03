// 6 leetcode problem : ZigZag Conversion

#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;

string convert(string s, int numRows)
{

    if (numRows <= 1)
        return s;

    vector<string> v(numRows, "");

    int j = 0, dir = -1;

    for (int i = 0; i < s.length(); i++)
    {

        if (j == numRows - 1 || j == 0)
            dir *= (-1);

        v[j] += s[i];

        if (dir == 1)
            j++;

        else
            j--;
    }

    string res;

    for (auto &it : v)
        res += it;

    return res;
}

int main()
{
    string s;
    int numRows;
    cout << "Enter a string: ";
    cin >> s;
    cout << "Enter the number of rows: ";
    cin >> numRows;

    string result = convert(s, numRows);

    cout << "ZigZag Conversion: " << result << endl;

    return 0;
}