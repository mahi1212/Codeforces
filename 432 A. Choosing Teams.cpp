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
    int n, k, c = 0;
    cin >> n >> k;
    for(int i=0; i<n; i++){
        int p;
        cin >> p;
        if(p+k <= 5){
            c++;
        }
    }
    cout << c/3;
    oky_bye;
}

