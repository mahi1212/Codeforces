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
/*
input >>    3 4 5 10 8 100 3 1
output >>   2

Overall the friends have 4*5=20 milliliters of the drink,
it is enough to make 20/3=6 toasts. The limes are enough
for 10*8=80 toasts and the salt is enough for 100/1=100
toasts. However, there are 3 friends in the group, so the answer is 2
*/
int main(){
    Bismillah();
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    //3 4 5 10 8 100 3 1
    int toast = (k*l)/nl;
    int lime = c*d;
    int salt = p/np;
    int res = min(toast, min(lime, salt))/n;
    cout << res;
    oky_bye;
}

