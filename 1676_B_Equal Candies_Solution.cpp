#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int b; // b = box
        cin >> b;
        int num[b];
        for(int i=0; i<b; i++){
            cin >> num[i];
        }
        int c =0;
        int mini = num[0];
        for(int i = 0; i<b;i++){
            if(mini > num[i]){
                mini = num[i];
            }
        }

        for(int i=0; i<b; i++){
            if(num[i] != mini){
                int diff = abs(mini - num[i]);
                c += diff;
            }
        }

        cout << c << endl;
    }

    return 0;
}
