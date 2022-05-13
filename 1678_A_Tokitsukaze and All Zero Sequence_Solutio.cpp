#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        int f[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int c = 0;
        for(int i=0; i<n; i++){
            while(arr[i]!=0){
                if(arr[i]==arr[i+1]){
                    arr[i] = 0;
                    c++;
                    break;
                }
                if(arr[i] < arr[i+1]){
                    arr[i+1] = arr[i];
                    c++;
                }
            }
            for(int i=0; i<n; i++){
                f[i] = c;
            }

            if(c>2){
                cout << c-2 << endl;
            }else{
                cout << c << endl;
            }

        }

    }


    return 0;
}
