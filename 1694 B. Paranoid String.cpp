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
        int len;
        cin >> len;
        string s;
        cin >> s;
        ll cnt = 1;
        for(int i=1; i<len; i++){
            if(s[i]==s[i-1]){
                cnt++;
            }else{
                cnt += i+1;
            }
        }
        cout << cnt << endl;
    }

    oky_bye;
}


