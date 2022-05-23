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
    ll n;
    cin >> n;
    if(n>=10) cout << n << endl;
    else
    {
        string s = to_string(n);
        int m = s.length();
        vector<char> v;
        ll last = s[m-1];
        ll before = s[m-2];

        if(before < last)
        {
            for(int i=0; i<m-1; i++){
                int q = s[i];
                v.pb(q);
            }
        }else{
            for(int i=0; i<m; i++)
            {
                if(i==m-2)
                {
                    continue;
                }
                int q = s[i];
                v.pb(q);
            }
        }
        if(m==3){

            if(v[1]=='1'  || v[1]=='2' || v[1]=='3' || v[1]=='4' || v[1]=='5' || v[1]=='6' || v[1]=='7' || v[1]=='8' || v[1]=='9'){
                cout << v[0] << v[1];
            }else{
                cout << v[1];
            }
        }else{
            for(int i=0; i<v.size(); i++){
                cout << v[i];
            }
        }

    }
}


