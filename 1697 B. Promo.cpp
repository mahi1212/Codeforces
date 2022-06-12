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

    int n, q, x, y;
    cin >> n >> q;
    int a[n+1];
    ll pref[n];
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    sort(a+1, a+n + 1, greater<int>());

    for(int i = 1; i <= n; i++){
        pref[i] = pref[i-1] + a[i];
    }
    while(q--){
        cin >> x >> y;
        cout << pref[x] - pref[x - y] << endl;
    }

    oky_bye;
}

