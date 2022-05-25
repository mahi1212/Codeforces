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
    int n;
    cin >> n;
    int police = 0, crime = 0;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        if(x > 0){
            police += x;
        }else{
            if(police < 1){
                ++crime;
            }else{
                --police;
            }
        }
    }

    cout << crime;

    oky_bye;
}

