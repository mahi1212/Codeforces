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
        ll x, y, a, b;
        cin >> x >> y;
        cin >> a >> b;
        ll total = 0;
        if(x > y){
            swap(x, y);
        }
        total += a*(y-x);

        if(2*a < b){
            total += x*(2*a);
        }else{
            total += x*b;
        }
        cout << total << endl;
    }

    oky_bye;
}
