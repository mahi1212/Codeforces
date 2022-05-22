#include<bits/stdc++.h>
using namespace std;

#define ll  long long
#define pb  push_back
#define yes cout <<"YES" <<endl
#define no cout << "NO" <<endl
#define oky_bye return 0

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    string s;
    cin >> s;
    bool all_upper = true;

    for(int i=1; i<s.size(); i++){
        if(s[i]>='a' && s[i]<= 'z'){
            all_upper = false;
            break;
        }
    }

    if(all_upper){
        for(int i=0; i<s.size(); i++){
            if(s[i]>=97){
                s[i]-=32;
            }else{
                s[i] += 32;
            }
        }
        cout << s;
    }else{
        cout << s;
    }


    oky_bye;
}

