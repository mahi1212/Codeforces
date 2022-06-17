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
    map<string, string> mp;
    for(int i=0; i<m; i++){
        string a, b;
        cin >> a >> b;
        mp[a] = b;
    }
    for(int i=0; i<n; i++){
        string x, y;
        cin >> x;
        y = mp[x];
        if(x.size() > y.size()){
            cout << y << " ";
        }else{
            cout << x << " ";
        }
    }

    oky_bye;
}


