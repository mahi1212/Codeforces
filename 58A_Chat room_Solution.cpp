#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    string s2 = "hello";
    int c = 0, j = 0;
    for(int i=0;i<s.length();i++){
        if(s[i]==s2[j]){
            j++;
            c++;
        }
    }

    if(c==5){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }


    return 0;
}
