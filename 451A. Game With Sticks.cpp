#include<bits/stdc++.h>
using namespace std;

#define ll  long long
#define pb  push_back
#define yes cout <<"YES" <<endl
#define no cout << "NO" <<endl
#define oky_bye return 0

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, m;
    cin >> n >> m;
    int k = min(n,m);
    if(k%2 == 0) cout << "Malvika" << endl;
    else cout << "Akshat" << endl;
    oky_bye;
}
