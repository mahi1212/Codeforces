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

int main()
{
    Bismillah();

    int n;
    cin >> n;
    bool flag = true;
    string s = to_string(n);
    for(int i=0; i<s.size();)
    {
        if(s[i]=='1' && s[i+1]=='4'  && s[i+2]=='4'){
            i+=3;
        }else if(s[i]=='1' && s[i+1]=='4'){
            i+=2;
        }else if(s[i]=='1'){
            i++;
        }else{
            flag=false;
            break;
        }
    }

    if(flag) yes;
    else no;

    oky_bye;
}
