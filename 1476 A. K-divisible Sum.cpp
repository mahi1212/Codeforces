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
        if(n==1){
            cout << k << endl;
        }else if(n==k){
            cout << 1 << endl;
        }else if(n<k){
            int a = k/n;
            int b = k%n;
            if(b!=0){
                a++;
            }
            cout << a << endl;
        }else{
            int c = n/k;
            int d = n%k;
            if(d!=0) c++;
            k *= c;
            int a = k/n;
            int b = k%n;
            if(b!=0){
                a++;
            }
            cout << a << endl;
        }
    }

    oky_bye;
}


