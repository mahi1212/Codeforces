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
        int n;
        cin >> n;
        int c = 0;
        while(n%6 ==0){
            n = n/6;
            c++;
        }
        while(n%3 == 0){
            n = n/3;
            c += 2;
        }
        if(n==1){
            cout << c << endl;
        }else{
            cout << -1 << endl;
        }

    }

    oky_bye;
}

