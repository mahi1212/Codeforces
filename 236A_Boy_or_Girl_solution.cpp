#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int num=0;
    for(int i=0; i<s.length(); i++){
        for(int j=i+1; j<s.length(); j++){
            if(s[i]==s[j]){
                num++;
                break;
            }
        }
    }

    int res = s.length() - num;
    if(res%2==0){
        cout << "CHAT WITH HER!" << endl;
    }else{
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
