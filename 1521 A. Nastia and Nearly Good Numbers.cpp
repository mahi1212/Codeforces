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
        // 5 3 -> 10 50 60
        ll a, b;
        cin >> a >> b;
        if(b!=1){
            yes;
            cout << a*b << " " << a << " " << (b+1ll)*a << endl;
        }else{
            no;
        }
    }

    oky_bye;
}


