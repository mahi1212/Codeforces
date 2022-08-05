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
        cout << n << endl;
        vector<int>a;
        for(int i=0; i<n; i++){
            a.pb(i+1);
            cout << i+1 << " ";
        }
        newline;
        int  i = 0, j = n-1;
        while(i<j){
            swap(a[i], a[j]);
            i++;
            for(auto x: a) cout << x << " ";
            newline;
        }
    }

    oky_bye;
}
