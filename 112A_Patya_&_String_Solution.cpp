#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1;
    string s2;
    cin >> s1;
    cin >> s2;
    //transform function for lowercase
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    for(int i= 1; i<=s1.length(); i++){
        for(int j = 1; j<=s2.length(); j++){
            if(s1[i]<s2[j]){
                cout << -1 << endl;
                break;
            }if(s1[i]>s2[j]){
                cout << 1 << endl;
                break;
            }if(s1[i]==s2[j]){
                cout << 0 << endl;
                break;
            }
        }
        break;
    }

    return 0;
}
