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
        int x, a, b, c;
        cin >> x;
        cin >> a >> b >> c;
        vector<int> v{a, b, c};
        int cnt = 0;
        int key = v[x-1];
        if(key != 0) cnt++, key = v[key-1];
        if(key != 0) cnt++, key = v[key-1];
        if(key != 0) cnt++, key = v[key-1];

        if(cnt == 2) yes;
        else no;
    }

    oky_bye;
}
