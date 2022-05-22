#include<bits/stdc++.h>
using namespace std;

#define ll  long long
#define pb  push_back
#define yes cout <<"YES" <<endl
#define no cout << "NO" <<endl
#define oky_bye return 0

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //bismillah
    int n, m;
    cin >> n >> m;
    int arr[m];
    for(int i=0; i<m; i++)
        cin >> arr[i];

    sort(arr, arr+m);
    int leastValue = arr[n-1]-arr[0];
    for(int i=1; i<=m-n; i++){
        if(arr[i+n-1]-arr[i] < leastValue){ // arr[i+n-1] = current location
            leastValue = arr[i+n-1]-arr[i];
        }
    }

    cout << leastValue << endl;

    oky_bye;
}

