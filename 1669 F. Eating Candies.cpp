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
        vector<ll> v(n+5);
        for(int i=1; i<=n; i++){
            cin >> v[i];
        }
        int i=1, j = n;
        ll cnt1=0, cnt2=0, sum1=0, sum2=0;
        int ans = 0;
        while(i<=j){
            if(sum1 <= sum2){
                sum1+= v[i];
                i++;
                cnt1++;
            }else{
                sum2+= v[j];
                j--;
                cnt2++;
            }
            if(sum1==sum2){
                ans = cnt1+cnt2;
            }
        }
        cout << ans << endl;
    }

    oky_bye;
}
