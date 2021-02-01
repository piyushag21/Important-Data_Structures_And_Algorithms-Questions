#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    if(s1.length() + s2.length() != s3.length())
    {
        cout << "NO" << "\n";
    }
    else
    {
        int j = 0;
        for(int itr = 0; itr < s3.length(); itr++)
        {
            if( s3[itr] == s1[j] )
            {
                j++;
            }
        }
        if(j == s1.length())
        {
            int i = 0;
            for(int itr = 0; itr < s3.length(); itr++)
            {
                if( s3[itr] == s2[i] )
                {
                    i++;
                }
            }
            if(i == s2.length())
            {
                cout << "YES" << "\n";
            }
            else
            {
                cout << "NO" << "\n";
            }
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
    return 0;
}