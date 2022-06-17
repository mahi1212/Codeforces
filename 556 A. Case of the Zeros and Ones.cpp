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
    string s;
    cin >> s;
    int zeros = count(s.begin(), s.end(), '0');
    int ones = count(s.begin(), s.end(), '1');
    int minimum = min(zeros, ones);
    cout << n - 2*minimum;
    oky_bye;
}


