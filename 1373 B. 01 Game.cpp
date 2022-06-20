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
        string s;
        cin >> s;
        int n = s.size();
        int Z =0;
        int O =0;
        for(int i=0; i<n; i++){
            if(s[i]=='0'){
                Z++;
            }else{
                O++;
            }
        }
        int cnt = min(Z, O);

        if(cnt%2 != 0){
            cout << "DA" << endl;
        }else{
            cout << "NET" << endl;
        }

    }

    oky_bye;
}
