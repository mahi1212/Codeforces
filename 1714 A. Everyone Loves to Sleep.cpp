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
        int n, H, M;
        cin >> n >> H >> M;
        map<int, int> mp;
        for(int i=0; i<n; i++){
            int h, m;
            cin >> h >> m;
            mp[h*60 + m]++;
        }
        int t = 0;
        while(!mp[(H*60+ M + t)% (24*60)]) t++;
        t %= 24*60;
        cout << t/60 << " " << t%60 << endl;
    }

    oky_bye;
}
