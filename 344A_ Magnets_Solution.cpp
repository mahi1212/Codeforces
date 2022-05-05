#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    string s;
    cin >> t;
    vector<string> v;
    vector<char> c;
    while(t--){
        cin >> s;
        v.push_back(s);
    }
    for(int i=0; i<v.size(); i++){
        if(v[i-1]!=v[i]){
            c.push_back(i);
        }
    }

    if(c.size()==1) cout << 1 << endl;
    else cout << c.size();
    return 0;
}
