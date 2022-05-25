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
    int t;
    cin >> t;
    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        string s;
        cin >> s;
        char
        // start
        sort(s.begin(), s.end());
        int len1 = a + b + 2*c + 2*d;
        int len2 = s.length();

        int a1 = a + c + d;
        int b1 = b + c + d;
        // for string
        int a2 = 0;
        int b2 = 0;
        for(int i=0; i<len2; i++){
            if(s[i]=='A'){
                a2++;
            }else{
                b2++;
            }
        }
        if(b2==b1 || a2==a1 ){
            yes;
        }else{
            no;
        }
    }

    oky_bye;
}

