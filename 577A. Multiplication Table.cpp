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

    int n, x;
    cin >> n >> x;
    int count = 0;
    for(int i=1; i<=n; i++){
        if(x%i==0 && x/i <=n){
            count++;
        }
    }

    cout << count << endl;

    oky_bye;
}

