#include<bits/stdc++.h>
using namespace std;

#define   ll          long long
#define   endl        "\n"

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n, k;
        cin>>n>>k;
        ll a[n];
        ll ans=-(ll)k*(k-1)/2;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            ans+=a[i];
            a[i]-= n-i-1;
        }
        sort(a, a+n, greater<ll>());

        for(int i=0; i<k; i++)
        {
            ans-=a[i];
        }
        cout<<ans<<endl;

    }

    return 0;
}
