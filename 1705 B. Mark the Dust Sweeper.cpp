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
        int n;
        cin >> n;
        vector<ll> a(n);
        ll ans = 0;
        ll firstPos = -1; //firstPositive
        for(ll i=0; i<n; i++){
            cin >> a[i];
            if(firstPos == -1 && a[i]>0){
                firstPos = i;
            }
        }
        if(firstPos == -1 || firstPos == n-1){
            cout << 0 << endl;
            continue;
        }
        for(ll i = firstPos; i<n-1; i++){
            ans += a[i];
            if(a[i]== 0){
                ans++;
            }
        }
        cout << ans << endl;
    }

    oky_bye;
}
