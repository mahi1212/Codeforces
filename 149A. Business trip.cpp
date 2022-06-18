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

    int k;
    cin >> k;
    int a[12];
    for(int i=0; i<12; i++){
        cin >> a[i];
    }
    //sa(a, 12);
    sort(a, a+12, greater<int>());
    int sum = 0;
    int count = 0;
    if(k==0){
        cout << 0 << endl;
        oky_bye;
    }
    for(int i=0; i<12; i++){
        //cout << a[i] << " ";
        sum += a[i];
        count++;
        if(sum >= k){
            break;
        }
    }
    if(sum < k) cout << -1 << endl;
    else cout << count << endl;

    oky_bye;
}


