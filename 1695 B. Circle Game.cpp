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
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        if(n%2==1){
            cout << "Mike" << endl;
        }else{
            int small = INT_MAX, index;
            for(int i=0; i<n; i++){
                if(a[i] < small){
                    small = a[i];
                    index = i;
                }
            }

            if(index % 2 == 0){
                cout << "Joe" << endl;
            }else{
                cout << "Mike" << endl;
            }
        }
    }

    oky_bye;
}


