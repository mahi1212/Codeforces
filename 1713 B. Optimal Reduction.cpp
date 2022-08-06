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
        vector<int> v1;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            v1.pb(x);
        }
        vector<int> v2;
        v2 = v1;
        sv(v2);
        int l = 0, r = n-1, i = 0;
        bool ok = true;
        while(l<=r)
        {
            if(v1[l] == v2[i]){
                l++, i++;
            }else if(v1[r] == v2[i]){
                r--, i++;
            }else{
                ok = false;
                break;
            }
        }
        if(ok){
            yes;
        }else no;
    }

    oky_bye;
}
