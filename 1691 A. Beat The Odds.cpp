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
        int a[n];
        int c = 0; int d = 0;
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(a[i]%2==0){
                c++;
            }else{
                d++;
            }
        }
        int ans = min(c, d);
        cout << ans << endl;
    }

    oky_bye;
}

