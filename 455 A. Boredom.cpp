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

    int n;
    cin>>n;
    int maxi=-1;
    vector<ll>a(100005,0);
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        a[x]++;
        maxi=max(maxi,x);
    }
    vector<ll>b(100005,0);
    b[0]=0;
    b[1]=a[1];
    for(ll i=2; i<=100000; i++)
    {
        b[i]=max(b[i-1],b[i-2]+(a[i]*i));
    }
    cout<<b[maxi];

    oky_bye;
}
