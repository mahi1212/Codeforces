#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        char arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int c = 0;
        for(int i=0; i<n; i+=2){
            if(arr[i]!= arr[i+1]){
                c++;
            }

        }
        cout << c << endl;
    }

    return 0;
}
