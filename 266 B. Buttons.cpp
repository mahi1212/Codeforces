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
    cin >> n;
    int ans = 0;
    int initial = n;
    for(int i=1;n>=1;i++)
    {
        ans+=i*(n-1);
        n--;
    }
    cout << ans+initial;

    oky_bye;
}


