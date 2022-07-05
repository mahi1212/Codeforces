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

    int dp[100005];
    string s;
    cin >> s;
    int cnt = 0;
    for(int i=0; i< s.size(); i++){
        if(s[i]==s[i-1]){
            cnt++;
        }
        // # . . # # #
        // 0 0 1 1 2 3
        dp[i] = cnt;
    }

    int m;
    cin >> m;
    while(m--){
        int l, r;
        cin >> l >> r;
        cout << dp[r-1]-dp[l-1] << endl;
    }

    oky_bye;
}
