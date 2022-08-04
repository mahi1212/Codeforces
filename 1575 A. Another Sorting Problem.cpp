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

int n,m,id[1001000];
string s[1001000];
bool cmp(int x,int y)
{
    for(int i=0; i<m; i++)
    {
        if (s[x][i]==s[y][i]) continue ;
        return (i%2==0?s[x][i]<s[y][i]:s[x][i]>s[y][i]);
    }
    return 1;
}

int main(){
    scanf("%d %d",&n,&m);
    for (int i=1; i<=n; i++){
        cin>>s[i];
        id[i]=i;
    }
    sort(id+1,id+n+1,cmp);
    for (int i=1; i<=n; i++) printf("%d ", id[i]);
    return 0;
}
