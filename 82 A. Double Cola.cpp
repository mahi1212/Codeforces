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

    int n, i = 1;
    cin >> n;
    string arr[]= {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    while (i * 5 < n)
    {
        n -= i * 5;
        i *= 2;
    }

    cout << arr[(n-1)/i] << endl;

    oky_bye;
}
