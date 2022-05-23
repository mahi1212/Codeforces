#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define pb  push_back
#define F   first
#define S   second
#define yes cout <<"YES" <<endl
#define no  cout << "NO" <<endl
#define oky_bye return 0

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, m;
    int initial = 1;
    ll time = 0;
    cin >> n >> m;
    for(int i=0; i<m; i++){
        int present;
        cin >> present;

        if(present >= initial){
            time += present - initial;
        }else{
            time += n - (initial - present);
        }
        initial = present;
    }
    cout << time;

    oky_bye;
}

