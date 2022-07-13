#include<bits/stdc++.h>
using namespace std;

#define ll                  long long
#define pb                  push_back
#define yes                 cout <<"YES" <<endl
#define no                  cout << "NO" <<endl
#define newline             cout <<endl
#define sa(a,n)             sort(a,a+n)
#define sv(v)               sort(v.begin(),v.end())
#define sumVec(v)           accumulate(v.begin(), v.end(), 0)
#define fillVec(v,value)    fill(v.begin(), v.end(), value)
#define Bismillah()         ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define oky_bye             return 0

int main()
{
    Bismillah();

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<string>v;
        map<string,int>m;
        for(int i=1; i<=n; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
            m[s]++;
        }

        string ans = "";
        for(int i=0; i<n; i++)
        {
            string s = v[i];
            bool pos = false;
            for(int j=1; j+1<=s.size(); j++)
            {
                string a = s.substr(0, j);
                string b = s.substr(j, (s.size()-j));
                if(m[a] && m[b])
                {
                    pos = true;
                    break;
                }
            }

            if(pos)ans += "1";
            else ans += "0";
        }
        cout << ans << endl;
    }
    oky_bye;
}
