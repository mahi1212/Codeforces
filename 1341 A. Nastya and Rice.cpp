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
        int n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;
        int p = n*(a-b);
        int q = n*(a+b);
        if(p>c+d || q < c-d){
            cout << "No" << endl;
        }else{
            cout << "Yes" << endl;
        }
    }

    oky_bye;
}


