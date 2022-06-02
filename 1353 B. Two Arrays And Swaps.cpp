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

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> b(n);

        for(int i=0; i<n; i++)
            cin >> a[i];
        for(int i=0; i<n; i++)
            cin >> b[i];

        sv(a);
        sort(b.begin(), b.end(), greater<>());

        for(int i=0; i<k; i++){
            if(a[i]<b[i]){
                swap(a[i], b[i]);
            }else break;
        }
        ll sum = 0;
        for (int i=0; i<n; i++){
            sum += (ll) a[i];
        }
        cout << sum << endl;
    }

    oky_bye;
}

