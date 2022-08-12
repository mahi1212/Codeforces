#include<bits/stdc++.h>
using namespace std;

#define ll                  long long
#define pb                  push_back
#define yes                 cout <<"YES" <<endl
#define no                  cout << "NO" <<endl
#define newline             cout <<endl
#define sa(a,n)             sort(a,a+n)
#define sv(v)               sort(v.begin(),v.end())
#define sumVec(v)           accumulate(v.begin(), v.end(), 0)
#define fillVec(v,value)    fill(v.begin(), v.end(), value)
#define Bismillah()         ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define oky_bye             return 0

int main(){
    Bismillah();

    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        vector<int> a;
        for(int i=0; i<2*n; i++){
            int x;
            cin >> x;
            a.pb(x);
        }
        sv(a);
        bool ok = true;
        for(int i=0; i<n; i++){
            if(a[i+n] - a[i] < x){
                ok = false;
                break;
            }
        }
        if(ok) yes;
        else no;
    }

    oky_bye;
}
