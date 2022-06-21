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

    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n; // 35
        ll x, rem, ans = 0; // x = khoros korsi
        while(1){
            x = (n/10) * 10; // 30
            ans = ans + x;
            rem = n - x;
            n = (n/10) + rem;
            if(n<10){
                ans += n;
                break;
            }
        }
        cout << ans << endl;
    }

    oky_bye;
}


