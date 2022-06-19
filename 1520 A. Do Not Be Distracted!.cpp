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
        string s;
        cin >> s;
        bool flag = false;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if((s[i]==s[j]) && s[j-1]!= s[i]){
                    flag = true;
                }
            }
        }
        if(flag) no;
        else yes;

    }

    oky_bye;
}


