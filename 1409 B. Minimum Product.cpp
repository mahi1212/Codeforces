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
        ll a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;
        ll copyA = a;
        ll copyB = b;
        ll aBound = a-x;
        ll bBound = b-y;

        a -= min(aBound, n);
        b -= min(n - min(aBound, n), bBound);

        copyB -= min(bBound, n);
        copyA -= min(n - min(bBound, n),aBound);

        cout << min(copyA *copyB , a*b) << endl;

    }

    oky_bye;
}
