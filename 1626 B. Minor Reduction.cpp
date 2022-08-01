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

void solve(){
    string s;
        cin >> s;
        int n = s.size();
        string s1="";
        for(int i=n-1; i>0; i--)
        {
            int a=s[i]-'0';
            int b=s[i-1]-'0';
            if(a+b>9){
                for(int j=0; j<i-1; j++)cout<<s[j];
                cout<<a+b;
                for(int j=s1.length()-1; j>=0; j--)cout<<s1[j];
                newline;
                return;
            }
            else s1+=s[i];
        }
        if(n==2){
            //if only two indeces
            int a=s[0]-'0';
            int b=s[1]-'0';
            cout << a+b << endl;
        }else{
            //add first 2 indeces and left remaining as it is
            int a=s[0]-'0';
            int b=s[1]-'0';
            cout << a+b << s.substr(2) << endl;
        }

}

int main()
{
    Bismillah();

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    oky_bye;
}
