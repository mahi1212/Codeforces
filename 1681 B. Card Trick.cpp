#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define pb              push_back
#define yes             cout <<"YES" <<endl
#define no              cout << "NO" <<endl
#define sa(a,n)         sort(a,a+n)
#define sv(v)           sort(v.begin(),v.end())
#define input(a,n)      for(int i=0;i<n;i++) cin>>a[i];
#define output(a,n)     for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define oky_bye         return 0

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //bismillah
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, s = 0;
        cin>>n;
        vector<int>v1(n);
        for(int i=0; i<n; ++i)
        {
            cin>>v1[i];
        }
        cin>>m;
        vector<int> v2(m);
        for(int i=0; i<m; ++i)
        {
            int p;
            cin >> p;
            s = s + p;
            s = s % n;
        }
        cout<< v1[s] <<endl;

    }

    oky_bye;
}

