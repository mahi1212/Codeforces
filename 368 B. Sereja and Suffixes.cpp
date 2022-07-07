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

    int n,m,i,j,l;
    set<int>s;
    cin>>n>>m;
    int a[n+10],b[n+10];
    for(i=1;i<n+1;i++){
        cin>>a[i];
    }
    for(i=n;i>=1;i--){
        s.insert(a[i]);
        b[i]=s.size();
    }
    for(i=0;i<m;i++){
        cin>>l;
        cout<<b[l]<<endl;
    }
    oky_bye;
}
