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

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[6];
        int total = 0, m=1;
        for(int i=1; i<6; i++){
            arr[i] = n%10;
            n = n/10;
            if(arr[i] != 0){
                total++;
            }
        }

        cout << total << endl;
        for(int i=1; i<6; i++){
            if(arr[i]!=0){
                cout << arr[i]*m << " ";
            }
            m = m*10;
        }
        cout << endl;
    }

    oky_bye;
}

