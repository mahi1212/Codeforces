#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        int c = 0;
        bool flag = false;
        for(int i=n-2; i>=0; i--){
            if(arr[i+1]==0){
                flag = true;
                break;
            }
            while(arr[i]>=arr[i+1]){
                c++;
                arr[i]/=2;
            }
        }

        if(flag) cout << -1 << endl;
        else cout << c << endl;

    }

    return 0;
}
