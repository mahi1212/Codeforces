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
        int n;
        cin >> n;
        vector <int> a, even, odd;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            if(x%2==0) even.pb(x);
            else odd.pb(x);
        }
        for(auto i: even) a.pb(i);
        for(auto i: odd) a.pb(i);
        int total = 0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(__gcd(a[i], 2*a[j])>1)
                    total++;
            }
        }
        cout << total << endl;
    }

    oky_bye;
}


