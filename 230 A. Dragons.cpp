#include<bits/stdc++.h>
using namespace std;

#define ll  long long
#define pb  push_back
#define yes cout <<"YES" <<endl
#define no cout << "NO" <<endl
#define oky_bye return 0

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //bismillah
    int s, n, x, y;
    cin >> s >> n;
    vector<pair<int,int>> v;
    for(int i=0; i<n; i++) {
        cin >> x >> y;
        v.push_back({x, y});
    }

    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++) {
        if(s <= v[i].first){
            no;
            return 0;
        } else {
            s += v[i].second;
        }
    }
    yes;

}

