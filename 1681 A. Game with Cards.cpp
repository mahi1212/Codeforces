#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define pb              push_back
#define yes             cout <<"YES" <<endl
#define no              cout << "NO" <<endl
#define sa(a,n)         sort(a,a+n)
#define sv(v)           sort(v.begin(),v.end())
#define oky_bye         return 0

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //bismillah
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v1;
        vector<int> v2;
        for(int i=0;i<n;i++){
            int q;
            cin >> q;
            v1.pb(q);
        }

        int m;
        cin >> m;
        for(int i=0;i<m;i++){
            int o;
            cin >> o;
            v2.pb(o);
        }

        int a= *max_element(v1.begin(), v1.end());
        int b = *max_element(v2.begin(), v2.end());

        if(a>b){
            cout << "Alice" << endl;
            cout << "Alice" << endl;
        }else if(a==b){
            cout << "Alice" << endl;
            cout << "Bob" << endl;
        }else{
            cout << "Bob" << endl;
            cout << "Bob" << endl;
        }
    }

    oky_bye;
}

