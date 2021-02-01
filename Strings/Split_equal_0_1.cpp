#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int count_one = 0, count_zero = 0, count_sub = 0;
    for(int itr = 0; itr < str.length(); itr++)
    {
        if( str[itr] == '0' )
        {
            count_zero++;
        }
        else if( str[itr] == '1' )
        {
            count_one++;
        }

        if(count_one == count_zero)
        {
            count_sub++;
        }
    } 
    if( count_sub == 0 )
    {
        cout << "-1" << "\n";
    }
    else
    {
        cout << count_sub << "\n";
    }
}