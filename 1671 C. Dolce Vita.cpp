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
        ll n,x;
        cin>>n>>x;
        ll ar[n+3];
        for(int i=1;i<=n;i++)
        {
            cin>>ar[i];
        }
        sort(ar+1,ar+n+1);
        ll pre[n+5];
        pre[0]=0;
        for(int i=1;i<=n;i++){s
            pre[i]=pre[i-1]+ar[i];
        }
        ll ans = 0;
        for(int i=1;i<=n;i++)
        {
            if(pre[i]>x) break;
            ll dif = x-pre[i];
            ll y = dif/i;
            y++;
            ans += y*i;
            ans -= (i-1)*y;
        }
        cout << ans << endl;
    }

    oky_bye;
}
