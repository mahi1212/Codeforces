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

bool cond(pair<char, int>a, pair<char, int>b){
    return (a.first > b.first);
}

int main(){
    Bismillah();

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int p;
        cin >> p;
        int n = s.size();
        vector<pair<char, int>>v;
        // find out total cost
        int cost = 0;
        for(int i=0; i<n; i++){
            v.pb({s[i],i});
            cost += (s[i]-96);
        }
        //cout << cost << endl;
        vector<int>indexs(n, 0);
        //sort<v.begin(), v.end(), cond>;
        for(auto i:v){
            if(cost <= p) break;
            cost -= (i.first-96);
            indexs[i.second] =- 1;
        }
        for(int i=0; i<n; i++){
            if(indexs[i] != -1){
                cout << s[i];
            }
        }
        newline;
    }

    oky_bye;
}
