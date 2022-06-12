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
    int n, a, b;
    while(t--){
        cin >> n >> a >> b;
        char c[] = "abcdefghijklmnopqrstuvwxyz";
        string s;
        for(int i=0; i<b; i++){
            s[i] = c[i];
        }

        int j = 0;
        while(n--){
            cout << s[j];
            j++;
            if(j==b){
                j = 0;
            }
        }
        newline;
    }

    oky_bye;
}

