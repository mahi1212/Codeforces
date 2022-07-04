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
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<ll>>my_mat;
        my_mat.pb({1,0,0,1});
        my_mat.pb({0,1,1,0});
        my_mat.pb({0,1,1,0});
        my_mat.pb({1,0,0,1});
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cout << my_mat[i%4][j%4] << " ";
            }
            newline;
        }
    }
    oky_bye;
}
