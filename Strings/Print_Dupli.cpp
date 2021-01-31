#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    unordered_map<char ,int> dupli;
    for(int i = 0; i < str.length(); i++)
    {
        dupli[str[i]]++;
    }
    for(auto itr = dupli.begin(); itr != dupli.end(); itr++)
    {
        if(itr->second > 1)
        {
            cout << itr->first << ", count = " << itr->second << "\n";
        }
    }
}