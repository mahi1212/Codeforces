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

    int a[5];
    int sum = 0;
    for(int i=0; i<5; i++){
        cin >> a[i];
        sum += a[i];
    }
    if(sum == 0){
        cout << -1 << endl;
    }else{
        if(sum % 5 == 0){
            cout << sum / 5 << endl;
        }else{
            cout << -1 << endl;
        }
    }

    oky_bye;
}
