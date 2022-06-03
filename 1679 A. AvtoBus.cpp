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
        cin >> n;
        if(n%2==1 || n < 4) cout << -1 << endl;
        else{
            ll max = n/4;
            ll min = n/6;
            if(n%6 != 0){
                min++;
            }
            cout << min << " " << max << endl;
        }
    }

    oky_bye;
}

