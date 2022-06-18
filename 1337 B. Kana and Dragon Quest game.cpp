
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
        int x, n, m;
        cin >> x >> n >> m;
        bool flag = false;
        for(int i=0; i<n; i++){
            if(x<=10) goto label;
            x = round(x/2) + 10;
            //cout << x << endl;
        }
        label:
        for(int i=0; i<m; i++){
            x -= 10;
            if(x<=0) flag = true;
            //cout << x << endl;
        }
        if(flag) yes;
        else no;
    }

    oky_bye;
}
