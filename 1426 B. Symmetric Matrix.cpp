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
        int x, m;
        cin >> x >> m;
        int a, b, c, d;
        int flag = 0;
        for(int i=1; i<=x; i++){
            cin >> a >> b >> c >> d;
            if(b==c) flag = 1;
        }
        int p = m*m;
        if(p%4 == 0 && flag == 1) yes;
        else no;
    }

    oky_bye;
}
