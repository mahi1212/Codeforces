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

    int n;
    cin >> n;
    int cnt1 = 0, extra0 = 0, extra0max = -1;
    while(n--){
        int x;
        cin >> x;
        if(x==1){
            cnt1 += 1;
            if(extra0 > 0){
                extra0 -= 1;
                //cout << " extra0 : "<< extra0 << endl;
            }
        }else{
            extra0 += 1;
            if(extra0 > extra0max){
                extra0max = extra0;
                //cout << " extra0max : "<< extra0max << endl;
            }
        }

    }
    cout << cnt1 + extra0max << endl;
    oky_bye;
}
