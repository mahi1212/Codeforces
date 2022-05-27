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
int arr[24][60];

int main(){
    Bismillah();
    //code here
    int t;
    cin >> t;
    int count = 0;
    for(int i=0; i<t; i++){
        int a, b;
        cin >> a >> b;
        arr[a][b]++;

        if(arr[a][b] > count){
             count = arr[a][b];
        }

    }

    cout << count;
    oky_bye;
}
