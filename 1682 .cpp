#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define pb              push_back
#define yes             cout <<"YES" <<endl
#define no              cout << "NO" <<endl
#define newline         cout <<endl
#define sa(a,n)         sort(a,a+n)
#define sv(v)           sort(v.begin(),v.end())
#define sumVec(v)       accumulate(v.begin(), v.end(), 0)
#define Bismillah()     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define oky_bye         return 0

int main(){
    Bismillah();

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        set<int> s;
        // Checking whether index & element is same
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(a[i] != i){
                s.insert(a[i]);
            }
        }
        int x = 0;
        x = *s.begin();
        for(auto it: s){
            x = x & it;
        }
        cout << x << endl;
    }

    oky_bye;
}
