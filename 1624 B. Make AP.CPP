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
        int a, b, c;
        cin >> a >> b >> c;
        bool flag = false;
        int x = ((2*b)-c)/a;
        if((2*b-c == a*x && x>0)){
            yes;
            continue;
        }
        x = ((2*b)-a)/c;
        if((2*b-a) == x*c && x>0){
            yes;
            continue;
        }
        x = (c+a)/(2*b);
        if(c+a==2*b*x && x>0){
            yes;
            continue;
        }
        no;
    }

    oky_bye;
}


