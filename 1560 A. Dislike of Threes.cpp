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
        int k;
        cin >> k;
        for(int i=1;; i++){
            if(i % 3 == 0 || i % 10 == 3){ // i%10 = last element
                continue;
            }else{
                --k; // 3 2 1 0
                if(k==0){
                    cout << i << endl;
                    break;
                }
            }
        }

    }

    oky_bye;
}
