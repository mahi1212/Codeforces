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

    int n, t;
    cin >> n >> t;
    if(t>=10){
        if(n==1){
            cout << -1 << endl;
        }
    }

    if(t>0 && t<10){
        for(int i=0; i<n; i++){
            cout << t;
        }
    }

    if(t==10 && n!= 1){
        for(int i=0; i<n-1; i++){
            cout << 1;
        }
        cout << 0 ;
    }

    oky_bye;
}

