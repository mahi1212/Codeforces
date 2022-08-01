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
        int n, h, m;
        cin >> n >> h >> m;
        bool flag = false;
        vector<int> hours, mins;
        while(n--){
            int x, y;
            cin >> x >> y;
            hours.pb(x);
            mins.pb(y);
            if(x == h){
                flag = true;
            }
        }
        if(flag){
            cout << 0 << " ";
        }else{
            int diff = (h - *min_element(hours.begin(), hours.end()));

        }
    }

    oky_bye;
}
