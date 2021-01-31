#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:	
	
	int isPlaindrome(string S)
	{
	    string original = S;
	    string Reverse = "";
	    for(int itr = S.length()-1; itr >=0 ; itr--)
	    {
	        Reverse = Reverse + S[itr];
	    }
	    if(original == Reverse)
	    {
	        return 1;
	    }
	    else
	    {
	        return 0;
	    }
	}

};



int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPlaindrome(s) << "\n";
   	}

    return 0;
}  
