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

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n, m, a, b;
    cin >> n >> m >> a >> b;
    if(m*a <= b){
        cout << n*a;
    }else{
        cout << (n/m)*b + min((n%m)*a, b);
    }

    oky_bye;
}

