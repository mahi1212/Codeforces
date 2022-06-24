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
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        vector<string> s(n);
        for(int i=0; i<n; i++){
            cin >> s[i];
        }
        int total = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(s[i][j]=='.' && j+1 < m && s[i][j+1]=='.'){
                    total += min(2*x, y);
                    j++;
                }else if(s[i][j]=='.'){
                    total += x;
                }
            }
        }
        cout << total << endl;
    }

    oky_bye;
}


