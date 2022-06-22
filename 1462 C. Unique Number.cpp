#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define pb              push_back
#define yes             cout <<"YES" <<endl
#define no              cout << "NO" <<endl
#define newline         cout <<endl
#define sa(a,n)         sort(a,a+n)
#define sv(v)           sort(v.begin(),v.end())
#define Bismillah()     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define oky_bye         return 0

int main()
{
    Bismillah();

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        bool flag = false;
        if(n>45)
        {
            cout << -1 << endl;
            continue;
        }
        vector<int> ans;
        for(int i=9; i>= 1; i--)
        {
            if(n>=i)
            {
                n -= i;
                ans.pb(i);
            }
        }
        sort(ans.begin(), ans.end());
        for(auto j:ans)
            cout << j;
        newline;
    }

    oky_bye;
}


