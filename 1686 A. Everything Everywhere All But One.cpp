#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define pb              push_back
#define yes             cout <<"YES" <<endl
#define no              cout << "NO" <<endl
#define newline         cout <<endl
#define sa(a,n)         sort(a,a+n)
#define sv(v)           sort(v.begin(),v.end())
#define oky_bye         return 0
#define Bismillah()     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    Bismillah();
    int t;
    cin >> t;
    while(t--){
        int n, sum =0;
        cin >> n;
        int a[n+1];
        for(int i=0; i<n; i++){
            cin >> a[i];
            sum += a[i];
        }

        bool flag = false;
        for(int i=0; i<n; i++){
            if((sum-a[i])== a[i]*(n-1)){
                flag = true;
            }
        }
        if(flag) yes;
        else no;

    }

    oky_bye;
}

