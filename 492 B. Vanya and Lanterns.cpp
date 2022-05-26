#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define pb              push_back
#define yes             cout <<"YES" <<endl
#define no              cout << "NO" <<endl
#define newline         cout <<endl
#define sa(a,n)         sort(a,a+n)
#define sv(v)           sort(v.begin(),v.end())
#define oky_bye         return 0

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,l;
    cin >> n >> l;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    sort(a, a+n);
    int d = 2*max(a[0],l-a[n-1]);
    for(int i=0; i<n; i++){
        d = max(d, (a[i]-a[i-1]));
    }

    cout << fixed << setprecision(9) << (double) d/2;

    oky_bye;
}

