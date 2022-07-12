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
        int res = 0;
        set<char> my_set;

        for(int i=0; i<n; i++){
            my_set.insert(s[i]);
            if(my_set.size()>3){
                res++;
                my_set.clear();
                i--;
            }
        }

        if(my_set.size()>=1){
            res++;
        }else{
            res--;
        }
        cout << res << endl;
    }

    oky_bye;
}
