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

    int n, m;
    cin >> n >> m;
    int res = 0;
    if(m>n){
        res = -1;
    }else{
        if(n%2){
            res = n/2+1;
        }else res = n/2;
        while(res%m >0){
            res++;
        }
    }

    cout << res <<endl;
    oky_bye;
}

