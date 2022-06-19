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

    int n;
    string s;
    cin >> n;
    cin >> s;
    int count = 0;
    int res = 0;
    string ans;
    for(int i=0; i<n; i++){
        count = 0;
        for(int j=0; j<n; j++){
            if(s[i]==s[j] and s[i+1]==s[j+1]){
                count++;
                if(res<count){
                    res = count;
                    ans = string(1, s[i]) + string (1, s[i+1]);
                }
            }
        }
    }
    cout << ans << endl;
    oky_bye;
}


