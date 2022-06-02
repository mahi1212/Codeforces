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
        int a[n+1];

        ll given[n+1] = {0}; // i%2
        ll req[n+1] = {0}; // a[i]%2

        ll change_1_to_0 = 0;
        ll change_0_to_1 = 0;

        for(ll i=0; i<n; i++){
            cin >> a[i];

            given[i] = i%2;
            req[i] = a[i]%2;
            if(given[i]!=req[i]){
                if(given[i]==1){
                    change_1_to_0++;
                }else{
                    change_0_to_1++;
                }
            }

        }
        if(change_1_to_0 != change_0_to_1){
            cout << -1 << endl;
        }else{
            cout << change_1_to_0 << endl;
        }

    }

    oky_bye;
}

