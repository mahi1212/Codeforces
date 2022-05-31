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
    int t;
    cin >> t;
    while(t--){
            ll n;
            cin>>n;
            vector<int>res(n);
            vector<pair<int,int> >v(n);

            for(int i=0; i<n; i++){
                cin >> v[i].first;
                v[i].second = i;
                res[i] = i+1;
            }

            sv(v);
            bool found = true;

            for(int i=0; i<n; i++){
                if(i == 0 && v[i].first != v[i+1].first ){
                    found = false;
                    break;
                }
                if(i == n-1 && v[i].first != v[i-1].first){
                   found = false;
                   break;
                }
                if(i>0 && i<n-1 && v[i].first != v[i+1].first && v[i].first != v[i-1].first){
                  found = false;
                  break;
                }
                if(v[i].first == v[i+1].first){
                    swap(res[v[i].second],res[v[i+1].second]);
                }
            }
            if(found){
                for(int i=0; i<n;i++){
                    cout<<res[i]<<" ";
                }
                newline;
            }else{
                cout<<"-1"<<endl;
            }
      }

    oky_bye;
}

