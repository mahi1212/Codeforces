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
        char a[10][10];
        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                cin >> a[i][j];
            }
        }

        for(int i=1; i<7; i++){
            for(int j=1; j<7; j++){
                if(a[i][j]=='#' && a[i+1][j+1]=='#' && a[i+1][j-1]=='#' && a[i-1][j+1]=='#' && a[i-1][j-1]=='#'){
                    cout << i+1 << " " << j+1 << endl;
                    break;
                }
            }
        }

    }

    oky_bye;
}

