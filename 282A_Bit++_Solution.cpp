#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int c = 0;

    while(t--){
        string str;
        cin >> str;
        char sign = '+';
        if(str.find(sign)!= string::npos){
            c += 1;
        }else{
            c-= 1;
        }
    }


    cout << c;

    return 0;
}
