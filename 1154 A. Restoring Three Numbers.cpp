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
    int arr[4];
    for (int i=0;i<4; i++){
        cin >> arr[i];
    }
    sa(arr,4);
    int c = arr[3]-arr[0];
    int b = arr[2] - c;
    int a = arr[3] -(b+c);

    cout << a << " " << b << " " << c << endl;

    oky_bye;
}

