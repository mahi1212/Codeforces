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
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int evenSum = 0;
        int oddSum = 0;

        if(n%4==2){
            no;
        }else{
            yes;
            for(int i=2; i<= n; i+=2 ){
                cout << i << " ";
                evenSum += i;
            }
            for(int i=1; i<n-2; i+=2){
                cout<<i<<" ";
                oddSum += i;
            }
            cout << evenSum - oddSum << endl;
        }

    }

    oky_bye;
}

