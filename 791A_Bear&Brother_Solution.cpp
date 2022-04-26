#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    a = a*3;
    b = b*2;
    int c = 1;
    while(1){
        if(a<=b){
            c = c+1;
        }
        if(a >=b){
            break;
        }
        a = a*3;
        b = b*2;
    }

    cout << c << endl;
    return 0;
}
