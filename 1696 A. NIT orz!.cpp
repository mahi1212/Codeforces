#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define pb              push_back
#define yes             cout <<"YES" <<endl
#define no              cout << "NO" <<endl
#define newline         cout <<endl
#define sa(a,n)         sort(a,a+n)
#define sv(v)           sort(v.begin(),v.end())
#define Bismillah()     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define oky_bye         return 0

int main(){
    Bismillah();

    int t;
    cin >> t;
    while(t--){
        int n, z;
        cin >> n >> z;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        vector<int> v;
        for(int i=0; i<n; i++){
            int ans = a[i] | z;
            v.pb(ans);
            ans = ans & z;
            v.pb(ans);
        }
        cout << *max_element(v.begin(), v.end()) << endl ;
    }

    oky_bye;
}


