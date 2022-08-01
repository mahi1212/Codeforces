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

int main()
{
    Bismillah();

    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    if(n==1){
        if(a[0]==15) cout << "DOWN" << endl;
        else if(a[0]==0) cout << "UP" << endl;
        else cout << - 1 << endl;
    }else{
        if(a[n-1] < a[n-2]){
            if(a[n-1]==0 && a[n-2]==1){
                cout << "UP" << endl;
            }else cout << "DOWN" << endl;
        }else{
            if(a[n-1]==15 && a[n-2]==14){
                cout << "DOWN" << endl;
            }else cout << "UP" << endl;
        }
    }

    oky_bye;
}
