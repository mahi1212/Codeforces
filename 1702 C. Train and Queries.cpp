
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
        int n, q;
        cin >> n >> q;
        vector<int> vec(n);
        for(int i=0; i<n; i++){
            cin >> vec[i];
        }
        map<int, vector<int>> indexs;
        for(int i=0; i<n; i++){
            indexs[vec[i]].pb(i);
        }

        while(q--){
            int a, b;
            cin >> a >> b;
            if(indexs[a].empty() || indexs[b].empty()){
                no;
                continue;
            }
            if(a==b){
                yes;
                continue;
            }
            if(indexs[a].front() < indexs[b].back()){
                yes;
            }else{
                no;
            }
        }
    }

    oky_bye;
}
