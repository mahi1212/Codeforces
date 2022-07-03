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
        vector<int> v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        int p1 = -1, p2 = -1;
        //find index and save
        for(int i=0; i<n-1; i++) {
            if(v[i]==v[i+1]){
                p1 = i+1;
                break;
            }
        }
        for(int i=n-1; i>0; i--) {
            if(v[i]==v[i-1]){
                p2 = i-1;
                break;
            }
        }
        if(p1 == -1 || p1>p2){ // 2 1 1 2 | 3 2 1 2
            cout << 0 << endl;
        }else if(p1 == p2){ // 2 1 (1) 1 3 ;here (1) is p1 and p2
            cout << 1 << endl;
        }else{
            cout << p2-p1 << endl;
        }
    }

    oky_bye;
}
