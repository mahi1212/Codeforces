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
        int n;
        cin >> n;
        vector <int>a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        bool flag = true;
        for(int i=0; i<n; i++){
            if(a[i] != a[0]){
                flag = false;
                break;
            }
        }
        if(flag){
            cout << -1 << endl;
            continue;
        }
        int maxi = *max_element(a.begin(), a.end());
        for(int i=0; i<n; i++){
            if(a[i] == maxi){
                if(i-1 >= 0 && a[i-1] < a[i]){
                    cout << i + 1 << endl;
                    break;
                }
                if(i+1 <n && a[i+1] < a[i]){
                    cout << i+1 << endl;
                    break;
                }
            }
        }
    }
    oky_bye;
}
