#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    set<char> mySet;
    for(int i=0; i<s.size(); i++){
        if(s[i]>='a' && s[i]<='z'){
            mySet.insert(s[i]); // set always accept distinct value
        }
    }

    cout << mySet.size() << endl;

    return 0;
}
