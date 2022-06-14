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
        set<int>S;
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int ans = 0;
        for(int i=0; i<n; i++){
            S.insert(a[i]);
        }
        ans = S.size();
        if(n%2 != 0 && ans%2 == 0){
            ans--;
        }
        if(n%2==0 && ans%2 !=0){
            ans--;
        }
        cout << ans << endl;
    }


    oky_bye;
}

