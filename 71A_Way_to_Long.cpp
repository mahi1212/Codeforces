#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int len = s.length();

        if(len < 10){
            cout << s << endl;
        }else{
            cout<< s.front()<< len-2 << s.back() << endl;
        }

    }
    return 0;
}
