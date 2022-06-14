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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int c = 0;
        for(int i=0; i<n; i++){
            if(s[i]=='1') c++;
        }
        ll ans = c*11;
        if(ans==0){
            cout << 0 << endl;
            continue;
        }
        int i=n-1;
        int kk=k;
        int ok=0;
        while(kk>=0&&i>=0)
        {
            if(s[i]=='1')
            {
                ok=1;
                ans-=10;
                break;
            }
            else
            {
                kk--;
                i--;
            }
        }
        if(ok==0)kk=k,i=n-1;
        int j=0;
        while(kk>=0 && j<i)
        {
            if(s[j]=='1')
            {
                ans--;
                break;
            }
            else
            {
                kk--;
                j++;
            }
        }

        cout << ans << endl;
    }

    oky_bye;
}
