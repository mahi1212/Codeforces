#include<bits/stdc++.h>
using namespace std;

#define ll                  long long
#define pb                  push_back
#define yes                 cout <<"YES" <<endl
#define no                  cout << "NO" <<endl
#define newline             cout <<endl
#define sa(a,n)             sort(a,a+n)
#define sv(v)               sort(v.begin(),v.end())
#define sumVec(v)           accumulate(v.begin(), v.end(), 0)
#define fillVec(v,value)    fill(v.begin(), v.end(), value)
#define Bismillah()         ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define oky_bye             return 0

int main()
{
    Bismillah();

    int n;
    cin >> n;
    int a[n];
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    int m;
    cin >> m;
    pair<int, int> p[1000];
    for(int i=0; i<m; i++)
    {
        cin >> p[i].first >> p[i].second;
    }

    for(int i=0; i<m; i++)
    {
        if(p[i].first <= sum && sum <= p[i].second)
        {
            cout << sum << endl;
            oky_bye;
        }
    }
    for(int i=0; i<m; i++)
    {
        if(sum < p[i].first)
        {
            cout << p[i].first << endl;
            oky_bye;
        }
    }
    cout << -1 << endl;
    oky_bye;
}
