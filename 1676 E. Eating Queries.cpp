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
        int n, q;
        cin >> n >> q;
        vector<int>v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        int sum = 0;
        sort(v.begin(), v.end(), greater<int>());
        for(int i=0; i<n; i++){
            sum += v[i];
            v[i] = sum;
        }
        while(q--){
            int x;
            cin >> x;
            ll ans = -1;
            ll h = 0, l = n-1;
            while(l >= h){
                ll mid = h + (l-h)/2;
                if(v[mid]>=x){
                    ans = mid+1;
                    l = mid-1;
                }else{
                    h = mid+1;
                }
            }
            cout << ans << endl;
        }
    }

    oky_bye;
}
