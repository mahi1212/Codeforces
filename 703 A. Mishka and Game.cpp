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
    int countm = 0;
    int countc = 0;

    while(t--){
        int m, c;
        cin >> m >> c;

        if(m>c){
            countm++;
        }
        if(m<c){
            countc++;
        }
    }
    if(countc > countm){
        cout << "Chris" << endl;
    }else if(countc < countm){
        cout << "Mishka" << endl;
    }else{
        cout << "Friendship is magic!^^" << endl;
    }

    oky_bye;
}

