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

    ll n,q;
    cin>>n>>q;
    ll ar[n+4];
    map<ll,ll>mp;
    ll sum=0;
    for(ll i=1;i<=n;i++)
    {
        cin>>ar[i];
        sum+=ar[i];
    }
    ll up=-1;
    while(q--)
    {
        ll a;
        cin>>a;
        if(a==1)
        {
            ll i,x;
            cin>>i>>x;
            if(up==-1)
            {
                if(x>=ar[i])sum+=(x-ar[i]);
                else sum-=(ar[i]-x);
                ar[i]=x;
                cout<<sum<<endl;
            }
            else
            {
                ll z;
                if(mp[i]==0)z=up;
                else z=mp[i];
                if(x>=z)sum+=x-z;
                else sum-=z-x;
                cout<<sum<<endl;
                mp[i]=x;
            }
        }
        else
        {
            ll x;
            cin>>x;
            cout<<x*n<<endl;
            sum=x*n;
            mp.clear();
            up=x;
        }
    }

    oky_bye;
}
