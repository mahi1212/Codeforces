#include<bits/stdc++.h>
using namespace std;

#define ll  long long
#define pb  push_back
#define yes cout <<"YES" <<endl
#define no cout << "NO" <<endl
#define oky_bye return 0

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, c = 0, d = 0;
    cin >> n;
    int arr[n];
    for (int i=1; i<=n; i++){
        cin >> arr[i];
        if(arr[i]%2==0){
            c++;
        }else{
            d++;
        }
    }

    if(c>d){
        for(int i=1; i <=n; i++){
            if(arr[i]%2!=0){
                cout << i;
                break;
            }
        }
    }else{
        for(int i=1; i <=n; i++){
            if(arr[i]%2==0){
                cout << i;
                break;
            }
        }
    }



    oky_bye;
}

