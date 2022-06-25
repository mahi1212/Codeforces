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
        string s1, s2;
        cin >> s1 >> s2;
        int len1 = s1.size(), len2 = s2.size();
        int lcm = len1*len2/__gcd(len1, len2);
        //cout << lcm << endl;
        string r1="", r2 = "";
        for(int i=0; i<lcm/len1; i++) r1 += s1;
        for(int i=0; i<lcm/len2; i++) r2 += s2;
        if(r1==r2) cout << r1 << endl;
        else cout << -1 << endl;
    }

    oky_bye;
}


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
        string s1, s2;
        cin >> s1 >> s2;
        int len1 = s1.size(), len2 = s2.size();
        int lcm = len1*len2/__gcd(len1, len2);
        //cout << lcm << endl;
        string r1="", r2 = "";
        for(int i=0; i<lcm/len1; i++) r1 += s1;
        for(int i=0; i<lcm/len2; i++) r2 += s2;
        if(r1==r2) cout << r1 << endl;
        else cout << -1 << endl;
    }

    oky_bye;
}


