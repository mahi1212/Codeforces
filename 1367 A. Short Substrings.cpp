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
    while(t--){
        string s, s2;
        cin >> s;
        if(s.length()<3){
            cout << s << endl;
        }else{
            for(int i=0; i<s.length(); i+=2){
                //cout << s[i];
                s2 += s[i];
            }
            s2+= s[s.length()-1]+s[s.length()];
            cout << s2;
            newline;
        }
    }

    oky_bye;
}

