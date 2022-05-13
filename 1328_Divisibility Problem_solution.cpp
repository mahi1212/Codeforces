#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int a,b;
        cin >> a >> b;

        int div, num;
        if(a%b == 0){
            cout << 0 << endl;
        }
        if(a > b && a%b!=0 ){
            div = a/b;
            div++;
            num = b*div;
            cout << num-a << endl;
        }
        if(a < b){
            num = b - a;
            cout << num << endl;
        }

    }

    return 0;
}
