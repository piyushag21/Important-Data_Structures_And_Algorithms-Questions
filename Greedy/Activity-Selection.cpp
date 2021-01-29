#include <bits/stdc++.h>
using namespace std;

int maxMeetings(int *, int *, int);

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        int ans = maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}


int maxMeetings(int start[], int end[], int n) 
{
    int count = 0;
    multimap<int , int>time;
    for(int itr = 0; itr < n; itr++)
    {
        time.insert(pair <int, int> (end[itr], start[itr]));
    }
    auto x = time.begin();
    count++;
    for(auto itr = std::next(time.begin()); itr != time.end(); itr++)
    {
        if(x->first < itr->second)
        {
            count++;
            x = itr;
        }
    }
   
    return count;
}