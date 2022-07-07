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

    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin>>n;
        map<string,ll> m;
        ll ans=0;
        for(ll i=0; i<n; i++)
        {
            string s;
            cin>>s;
            string temp=s;
            for(char ch='a'; ch<='z'; ch++)
            {
                if(ch!=s[0])
                {
                    temp[0]=ch;
                    ans+=m[temp];
                }
            }
            temp=s;
            for(char ch='a'; ch<='z'; ch++)
            {
                if(ch!=s[1])
                {
                    temp[1]=ch;
                    ans+=m[temp];
                }
            }
            m[s]++;
        }
        cout<<ans<<endl;
    }

    oky_bye;
}
