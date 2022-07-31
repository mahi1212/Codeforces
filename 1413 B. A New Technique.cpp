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

    int main(){
        Bismillah();

        int t;
        cin >> t;
        while(t--){
            int n, m;
            cin >> n >> m;
            int row[n * m + 1], col[n * m + 1];

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    int a;
                    cin >> a;
                    col[a] = j;
                }
            }
            for (int j = 0; j < m; j++)
            {
                for (int i = 0; i < n; i++)
                {
                    int a;
                    cin >> a;
                    row[a] = i;
                }
            }
            int ans[n][m];
            for (int i = 1; i < n*m+1; i++)
            {
                ans[row[i]][col[i]] = i;
            }
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    cout << ans[i][j] << ' ';
                }
                cout << endl;
            }
        }

        oky_bye;
    }
