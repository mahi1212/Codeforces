#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int num=0;
    while(t--){
        int a, b;
        cin >> a >> b;
        int diff = b-a;
        if(diff > 1){
            num++;
        }

    }
    cout << num;

    return 0;
}
