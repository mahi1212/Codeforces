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

    int a, b, d, m;
    cin >> a >> b;
    int h = a;

    while(a >= b)
    {
        d = a / b;
        h += d;
        m = a % b;
        a = d + m;
    }
    cout << h << endl;

    oky_bye;
}

