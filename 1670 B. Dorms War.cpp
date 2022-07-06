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

    int t;
    cin >> t;
    set<char> my_set;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        my_set.clear();
        int m;
        cin>>m;
        for(int i=1; i<=m; i++){
            char c;
            cin>>c;
            my_set.insert(c);
        }
        int last=0;
        int ma=0;
        for(int i=0; i<s.size(); i++)
        {
            if(my_set.count(s[i]))
            {
                ma=max(ma,i-last);
                last=i;
            }
        }
        cout<<ma<<endl;
    }

    oky_bye;
}
