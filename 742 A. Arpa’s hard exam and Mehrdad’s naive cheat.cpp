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

    ll n;
    cin >> n;
    if(n==0){
        cout<<"1";
        return 0;
    }

    if(n%4==0)
        cout<<"6"<<endl;
    else if(n%4==1)
        cout<<"8"<<endl;
    else if(n%4==2)
        cout<<"4"<<endl;
    else if(n%4==3)
        cout<<"2"<<endl;

    oky_bye;
}


