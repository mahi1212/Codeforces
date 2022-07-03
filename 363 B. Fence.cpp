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

    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    vector<int> pref(2000009);
    for(int i=0; i<n; i++){
        pref[i+1] = pref[i]+ a[i];
    }
    int min_total = INT_MAX;
    int index;
    for(int i=0; i<=n-k; i++){
        int total = pref[i+k] - pref[i];
        if(total < min_total){
            min_total = total;
            index = i+1;
        }
    }
    cout << index << endl;
    oky_bye;
}
