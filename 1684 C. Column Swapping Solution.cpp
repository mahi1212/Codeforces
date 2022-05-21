#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n, m, i, j;
        cin >> n >> m;
        ll a[n][m];
        vector < ll > v[n+1];
        set < ll > s;
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < m; j++)
            {
                cin >> a[i][j];
                v[i].push_back(a[i][j]);
            }
        }

        for(i = 0; i < n; i++)
        {
            sort(v[i].begin(), v[i].end());
            for(j = 0; j < m; j++)
            {
                if(v[i][j] != a[i][j])
                {
                    s.insert(j+1);
                }
            }
        }

        if(s.size() == 0)
            cout << "1 1";
        else if(s.size() > 2)
            cout << "-1";
        else{
            ll f = *(s.begin()) - 1;
            ll l = *(s.rbegin()) - 1;
        cout <<"F L : " << f << " " << l << endl;

            bool no = false;
            for(i = 0; i < n; i++)
            {
                if(a[i][f] != v[i][l])
                {
                    no = true;
                    break;
                }
            }

            if(no) cout << "-1";
            else cout << f+1 << " " << l+1;
        }
        cout << endl;
    }

    return 0;
}
