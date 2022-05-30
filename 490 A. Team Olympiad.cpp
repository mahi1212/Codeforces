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

    int n;
    cin >> n;
    int p = 0, q =0, r = 0;
    vector<int> av;
    vector<int> bv;
    vector<int> cv;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i]==1){
            p++;
            int m = i;
            av.pb(m);
        }else if(a[i]==2){
            q++;
            int m = i;
            bv.pb(m);
        }else{
            r++;
            int m = i;
            cv.pb(m);
        }
    }

    int w = min(p, min(q, r));
    cout  << w << endl;
    for(int i=0; i<w; i++){
        cout << av[i]+1 << " " << bv[i]+1 << " " << cv[i]+1 << endl;
    }
    oky_bye;
}
