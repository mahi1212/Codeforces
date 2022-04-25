#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int arr[3];
    int c;
    int num = 0;
    while(t--){
        for(int i=0; i<3; i++){
            c = 0;
            cin >> arr[i];
        }

        for(int i=0; i<3; i++){
            c = c + arr[i];
        }
        if(c >= 2){
            num += 1;
        }
    cout << c << endl;

    }
    cout << num ;

    //cout << num << endl;

    return 0;
}
