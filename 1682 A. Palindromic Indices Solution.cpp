#include<bits/stdc++.h>
using namespace std;

#define ll  long long
#define pb  push_back
#define yes cout <<"YES" <<endl
#define no cout << "NO" <<endl
#define oky_bye return 0

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        string s; cin >> s;

        int c = 0;
        int mid = n/2;
        if(n&1) c++;

        for(int i= n/2-1; i>=0; i--){
            if(s[i] == s[mid]){
                c += 2;
            }else{
                break;
            }
        }

        cout << c << endl;

    }

    oky_bye;
}
