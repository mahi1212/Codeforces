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
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> v;
        bool flag = false;
        for(int i=1; i<=n; i++){
            int k = l/i;
            if(l%i != 0) k++;
            if(i*k > r){
                flag = true;
                //no;
                continue;
            }
            //cout << i << " " << k << endl;
            int num = i*k;
            v.pb(num);
        }
        if(flag){
            no;
        }else{
            yes;
            for(int i=0; i<n; i++){
                cout << v[i] << " ";
            }
            newline;
        }

    }

    oky_bye;
}
