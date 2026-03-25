#include<iostream>
#include<string>
using namespace std;

int main()
{
    // string name;
    // cout<< "Enter a name: ";
    // getline(cin, name);
    // cout << name.length() << endl;
    // cout << name << endl;
    // name.push_back('!');
    // cout << name << endl;
    // cout << name.substr(0, 4) << endl;
    string a = "Hello";
    string b = "World";

    if(a == b)
    {
        cout << "Strings are equal" << endl;
    }
    else
    {
        cout << "Strings are not equal" << endl;
    }
    cout <<a.compare(b) << endl;
 return 0;
}