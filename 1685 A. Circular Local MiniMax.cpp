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
        int ar[n+4];
        for(int i=0;i<n;i++)cin >> ar[i];
        sort(ar,ar+n);
        vector<int>v;
        if(n%2 != 0){
            no;
            continue;
        }
        for(int i=0,j=n/2;i<n/2;i++,j++){
            v.pb(ar[i]);
            v.pb(ar[j]);
        }
        v.pb(v[0]);
        v.pb(v[1]);
        int ans=0;
        for(int i=1;i<v.size()-1;i++){
            if(v[i] > v[i-1] && v[i] > v[i+1])continue;
            else if(v[i] < v[i-1] && v[i] < v[i+1])continue;
            else{
                ans=1;
                break;
            }
        }
        if(ans==1) no;
        else{
            yes;
            for(int i=0;i<n;i++){
                cout << v[i] << " ";
            }
            newline;
        }
    }
    oky_bye;
}
