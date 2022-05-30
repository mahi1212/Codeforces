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
    //bismillah
    ll n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sa(a, n);
    int max = a[n-1];
    int count = 0;
    for(int i=0; i<n; i++){
        if(a[i] <= max){
            ll diff = max-a[i];
            count += diff;
        }
    }
    cout << count << endl;
    oky_bye;
}
