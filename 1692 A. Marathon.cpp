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
        int a[4];
        for(int i=0; i<4; i++){
            cin >> a[i];
        }
        int index = a[0];
        sort(a, a+4);
        int c = 0;
        for(int i=1; i<4; i++){
            if(index <a[i]){
                c++;
            }
        }
        cout << c << endl;

    }

    oky_bye;
}

