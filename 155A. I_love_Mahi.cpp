#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define pb              push_back
#define yes             cout <<"YES" <<endl
#define no              cout << "NO" <<endl
#define newline         cout <<endl
#define sa(a,n)         sort(a,a+n)
#define sv(v)           sort(v.begin(),v.end())
#define oky_bye         return 0

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //bismillah
    int min, max, best, worst, c = 0;
    int n;
    cin >> n;
    cin >> best;
    worst = best;
    while(--n){
        int a;
        cin >> a;
        if(a<worst){
            worst = a;
            c++;
        }
        if(a>best){
            best = a;
            c++;
        }
    }

    cout << c;
    oky_bye;
}

