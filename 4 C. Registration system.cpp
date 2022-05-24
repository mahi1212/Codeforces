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
    //bismillah
    int t;
    cin >> t;
    map<string, int> reg_sys;
    while(t--){
        string s;
        cin >> s;
        if(reg_sys[s]==0){
            reg_sys[s] = 1;
            cout << "OK" << endl;
        }else{
            cout << s << reg_sys[s] << endl;
            reg_sys[s]++;
        }
    }


    oky_bye;
}

