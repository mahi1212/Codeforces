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
        string ans;
        if(s[0]!='9'){
            for(int i=0; i<n; i++){
                int x = s[i]-'0'; //converting to integer
                int y = 9-x;
                ans += y+'0'; //converting to charecter
            }
        }else{
            int carry = 0;
            for(int i=n-1; i>=0; i--){
                int x = s[i]-'0';
                x += carry;
                if(x>1){
                    int y = 11-x;
                    ans += y+'0';
                    carry = 1;
                }else{
                    carry = 0;
                    int y = 1-x;
                    ans += y+'0';
                }
            }
            reverse(ans.begin(), ans.end());
        }
        cout << ans << endl;
    }

    oky_bye;
}
