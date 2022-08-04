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
        int n;
        cin >> n;
        vector<int> a(n);
        int total = 0;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            total += x;
            a[i] = x;
        }
        sv(a);
        if(total == 0){
            no;
            continue;
        }
        else{
            yes;
            int sum = 0;
            for(int i=0; i<n; i++){
                sum += a[i];
                if(sum == 0){
                    swap(a[i], a[n-1]);
                }
            }
            sum = 0;
            bool ok = true;
            for(int i=0; i<n; i++){
                sum += a[i];
                if(sum == 0){
                    ok = false;
                }
            }
            if(ok){
                for(int i=0; i<n; i++){
                    cout << a[i] << " ";
                }
                newline;
                continue;
            }
            sort(a.begin(), a.end(), greater<>());
            sum = 0;
            for(int i=0; i<n; i++){
                sum += a[i];
                if(sum == 0){
                    swap(a[i], a[n-1]);
                }
            }
            for(int i=0; i<n; i++){
                cout << a[i] << " ";
            }
            newline;
        }
    }

    oky_bye;
}
