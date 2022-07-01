#include<bits/stdc++.h>
using namespace std;

#define ll                  long long
#define pb              push_back
#define yes             cout <<"YES" <<endl
#define no              cout << "NO" <<endl
#define newline         cout <<endl
#define sa(a,n)         sort(a,a+n)
#define sv(v)           sort(v.begin(),v.end())
#define sumVec(v)       accumulate(v.begin(), v.end(), 0)
#define fillVec(v,value)    fill(v.begin(), v.end(), value)
#define Bismillah()     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define oky_bye         return 0

int main(){
    Bismillah();

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n], b[n];
        for(int i=1; i<= n; i++) cin >> a[i];
        for(int i=1; i<= n; i++) cin >> b[i];
        vector<pair<int, int>>v;

        //bubble sort
        for(int i=1; i<=n; i++){
            for(int j=1; j<n; j++){
                if(a[j]>a[j+1] || b[j]>b[j+1]){
                    swap(a[j], a[j+1]);
                    swap(b[j], b[j+1]);
                    v.pb({j, j+1});
                }
            }
        }

        int ans = 0;
        for(int i=1; i<n; i++){
            if(a[i]>a[i+1] || b[i]>b[i+1]){
                ans = -1;
                break;
            }
        }
        if(ans != 0) cout << -1 << endl;
        else{
            cout << v.size() << endl;
            for(int i=0; i<v.size(); i++){
                cout << v[i].first << " " << v[i].second << endl;
            }
        }
    }

    oky_bye;
}
