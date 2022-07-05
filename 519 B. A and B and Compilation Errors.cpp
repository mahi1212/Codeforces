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
    vector<int> a(n);
    vector<int> b(n-1);
    vector<int> c(n-2);
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n-1; i++) cin >> b[i];
    for(int i=0; i<n-2; i++) cin >> c[i];
    sv(a);
    sv(b);
    sv(c);
    for(int i=0; i<n; i++){
        if(a[i]!=b[i]){
            cout << a[i] << endl;
            break;
        }
    }
    for(int i=0; i<n-1; i++){
        if(b[i]!=c[i]){
            cout << b[i] << endl;
            break;
        }
    }

    oky_bye;
}
