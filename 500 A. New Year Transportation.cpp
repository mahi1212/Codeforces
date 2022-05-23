#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define pb              push_back
#define yes             cout <<"YES" <<endl
#define no              cout << "NO" <<endl
#define sa(a,n)         sort(a,a+n)
#define sv(v)           sort(v.begin(),v.end())
#define oky_bye         return 0

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //bismillah
    ll n, t;
    cin >> n >> t;
    ll a[n];
    for(int i=1; i<n; i++){
        cin >> a[i];
    }
    int pos = 1, next;
    while(pos < t){
        next = pos + a[pos];
        pos = next;
    }

    if(pos==t){
        yes;
    }else{
        no;
    }
    oky_bye;
}
