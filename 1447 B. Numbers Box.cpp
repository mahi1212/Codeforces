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
        int n, m;
        cin >> n >> m;
        int a[n][m];
        int ans = 0, x = 10000, f = 0, neg = 0;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> a[i][j];
                if(a[i][j]<0) neg++;
                if(a[i][j]==0) f = 1;
                x = min(abs(a[i][j]), x);
                ans += abs(a[i][j]);
            }
        }
        if(f==1) cout << ans << endl;
        else if(neg%2) cout << ans - (2*x) << endl;
        else cout << ans << endl;

        newline;
    }

    oky_bye;
}
