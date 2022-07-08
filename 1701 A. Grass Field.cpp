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

    int n;
    cin >> n;
    while(n--){
        int cnt = 0;
        int a[2][2];
        for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){
                cin >> a[i][j];
                if(a[i][j]==1) cnt++;
            }
        }
        if(cnt == 0){
            cout << 0 << endl;
        }else if(cnt == 4){
            cout << 2 << endl;
        }else{
            cout << 1 << endl;
        }
    }
    oky_bye;
}
