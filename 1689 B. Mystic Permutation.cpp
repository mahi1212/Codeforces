#include<bits/stdc++.h>
using namespace std;

#define ll              long long int
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
        ll n;
        cin>>n;
        ll a[n+1], i;
        for(i = 1; i <= n; i++) cin >> a[i];

        set< ll > s;
        vector < ll > v;

        if(n == 1)
        {
            cout << "-1\n";
            oky_bye;
        }

        for(i = 1; i <= n; i++)
        {
            if(i == a[i])
            {
                s.insert(i);
                s.insert(i+1);
                v.push_back(i+1);
                v.push_back(i);
                i++;
            }
            else
            {
                s.insert(i);
                v.push_back(i);
            }
        }

        if(s.size() == n)
        {
            for(auto u : v) cout << u << " ";
        }
        else
        {
            for(auto u = v.begin(); u != v.end() -3; u++) cout << *u << " ";
            cout << *(v.rbegin()) << " " << *(v.rbegin()+2);
        }
        cout << endl;

    }

    oky_bye;
}
