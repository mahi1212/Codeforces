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
        int ans = 0;
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                ans += (j-i+1);
                for(int k=i; k<=j; k++){
                    if(a[k]==0) ans++;
                }
            }
        }
        cout << ans << endl;
    }

    oky_bye;
}
