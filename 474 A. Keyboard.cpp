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

    string s1 = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char c;
    cin >> c;
    string s2;
    cin >> s2;

    for(int i=0; i<s2.size(); i++){
        int index = s1.find(s2[i]);
        if(c == 'R'){
            cout << s1[index-1];
        }else{
            cout << s1[index+1];
        }
    }

    oky_bye;
}

