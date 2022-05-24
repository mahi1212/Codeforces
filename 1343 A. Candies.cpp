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
    ll t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n;
        for( k = 2; k < 1000000; k++){
            int p = pow(2, k);
            --p;
            if(n%p==0){
                cout << n/p << endl;
                break;
            }
        }
    }

    oky_bye;
}

