#include<bits/stdc++.h>
using namespace std;

#define ll                  long long
#define pb                  push_back
#define yes                 cout <<"YES" <<endl
#define no                  cout << "NO" <<endl
#define newline             cout <<endl
#define sa(a,n)             sort(a,a+n)
#define sv(v)               sort(v.begin(),v.end())
#define sumVec(v)           accumulate(v.begin(), v.end(), 0)
#define fillVec(v,value)    fill(v.begin(), v.end(), value)
#define Bismillah()         ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define oky_bye             return 0

int main(){
    Bismillah();

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        set<char> diff;
        for(auto i:s){
            // insert unique character in set
            diff.insert(i);
        }
        int s_size = diff.size();
        int ok = 1;
        for(int i=0; i<s.size();i++){
            // yes will be if patter : abcabc, acdacd;
            if(s[i] != s[i%s_size]){
                ok = 0;
                break;
            }
        }
        cout << (ok ? "YES": "NO") << endl;
    }

    oky_bye;
}
