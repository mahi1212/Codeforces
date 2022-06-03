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
        string s, t;
        cin >> s;
        cin >> t;
        sort(t.begin(), t.end());

        if(t[0]=='a' && t.size()>1){
            cout << -1 << endl;
        }else if(t[0]=='a'){
            cout << 1 << endl;
        }else{
            ll ans = 1;
            for(ll i=1; i<=s.size(); i++){
                ans*=2;
            }
            cout << ans << endl;
        }

    }

    oky_bye;
}

