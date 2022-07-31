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
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        vector<int> v1, v2, even, odd;
        for(int i=0; i<n; i++){
            if(a[i]%2) v1.pb(a[i]), odd.pb(a[i]);
            else v2.pb(a[i]), even.pb(a[i]);
        }
        sv(v1);
        sv(v2);
        // odd and even both elements have to be sorted in given array
        if(v1 == odd && v2 == even){
            yes;
        }else{
            no;
        }
    }

    oky_bye;
}
