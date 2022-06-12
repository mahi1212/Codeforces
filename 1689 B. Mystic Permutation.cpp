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
        int a[n];
        vector<int> vec;
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        if(n==1) cout << "-1" << endl;
        if(n>1){
            for(int i=0; i<n; i++){
                if(a[0]>a[i]){
                    int d = i;
                    for(int j=i; j<n; j++){
                        int m = a[j];
                        vec.pb(m);
                    }
                    for(int k=0; k<d; k++){
                        int p = a[k];
                        vec.pb(p);
                    }
                    for(int i=0; i<n; i++){
                        cout << vec[i] << " ";
                    }
                }if(a[0]<a[i]){
                    int d = i;
                    for(int j=i; j<n; j++){
                        int m = a[j];
                        vec.pb(m);
                    }
                    for(int k=0; k<d; k++){
                        int p = a[k];
                        vec.pb(p);
                    }
                    for(int i=0; i<n; i++){
                        cout << vec[i] << " ";
                    }
                }
            }

        }



    }

    oky_bye;
}

