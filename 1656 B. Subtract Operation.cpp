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
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        sa(a, n);
        bool flag = false;
        for(int i=0; i<n; i++){
            int to_find = a[i]+k;
            if(binary_search(a+i+1, a+n, to_find)){
                yes;
                flag = true;
                break;
            }
        }
        if(!flag) no;

    }

    oky_bye;
}
