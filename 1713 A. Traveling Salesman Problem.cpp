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
        int xMax = 0, xMin = 0, yMax = 0, yMin = 0;
        for(int i=0; i<n; i++){
            int x, y;
            cin >> x >> y;
            xMax = max(xMax, x);
            xMin = min(xMin, x);
            yMax = max(yMax, y);
            yMin = min(yMin, y);
        }
        cout << 2*(xMax - xMin + yMax - yMin) << endl;
    }

    oky_bye;
}
