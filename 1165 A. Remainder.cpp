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

    int n, x, y;
    string arr;

    cin >> n >> x >> y >> arr;
    reverse(arr.begin(), arr.end());

    int ans = 0;
    for(int i=0; i<x; i++){
        if(i==y){
            ans += (arr[i] == '0');
        }else{
            ans += (arr[i] == '1');
        }
    }
    cout << ans << endl;

    oky_bye;
}
