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

    string s1;
    cin >> s1;
    int len = s1.length();
    if(len == 1){
        cout << s1+s1 << endl;
    }else{
        cout << s1;
        for(int i=len-1; i>= 0; i--){
            cout << s1[i];
        }
    }
    oky_bye;
}
