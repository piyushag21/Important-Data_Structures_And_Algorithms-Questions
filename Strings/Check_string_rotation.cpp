#include<bits/stdc++.h>
using namespace std;

int main()
{
    int itr = 0;
    string s1, s2, temp = "";
    cin >> s1 >> s2;
    temp = temp + s1 + s1;
    if(temp.find(s2))
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }
}