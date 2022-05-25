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
    int n, t; // t = time
    cin >> n >> t;
    int count = 0;
    int sum =0;
    for(int i=1; i<=n; i++){
        int a = 5*i;
        sum += a;
        if(sum + t + 1200 <= 1440){
            count++;
        }

    }

    if(sum + t + 1200 > 1440){
        cout << count;
    }else{
        cout << n;
    }




    oky_bye;
}

