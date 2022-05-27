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

int main(){
    Bismillah();
    //code here
    int n,a,b,c;
    cin >> n >> a >> b >> c;
    int dp[n+1];
    dp[0]=0;
    int x,y,z;
    for(int i=1; i<=n; i++)
    {
        x=INT_MIN,y=INT_MIN,z=INT_MIN;
        if(i>=a)
            x=dp[i-a];
        if(i>=b)
            y=dp[i-b];
        if(i>=c)
            z=dp[i-c];
        dp[i]=1+max(z,max(x,y));
    }
    cout<<dp[n];

    oky_bye;
}
