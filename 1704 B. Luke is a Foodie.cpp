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

int main(){
    Bismillah();

    int t;
    cin >> t;
    while(t--){
        int x, n; cin >> n >> x;
        int a[n];
        for(int i = 1; i <= n; i++)cin >> a[i];
        int Ans = 0, mx = a[1], mn = a[1];

        for(int i = 1; i <= n; i++) {
            mx = max(mx, a[i]);
            mn = min(mn, a[i]);

            ll dis = mx - mn;

            if(dis > x * 2) {
                ++Ans;
                mx = mn = a[i];
            }

        }

        cout << Ans << endl;
    }

    oky_bye;
}