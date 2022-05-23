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
        ll n;
        cin >> n;
        if(n&(n - 1))
        {
            yes;
        }
        else
        {
            no;
        }
    }

    oky_bye;
}
