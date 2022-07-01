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
        string s;
        cin >> s;
        int n = s.size();
        int zeros = -1, ones = -1;
        for(int i=0; i<n; i++){
            if(s[i]=='0'){
                zeros=i;
                break;
            }
        }
        for(int i=n-1; i>=0; i--){
            if(s[i]=='1'){
                ones = i;
                break;
            }
        }
        if(zeros == -1 && ones == -1){
            cout << n << endl;
        }else if(ones == -1){
            cout << zeros + 1 << endl;
        }else if(zeros == -1){
            cout << n - ones << endl;
        }else{
            cout << zeros + 1 - ones << endl;
        }
    }

    oky_bye;
}
