#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string str;
    cin >> n;
    cin >> str;
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    set<char> mySet;
    for(int i = 0; i < n; i++){
        if(str[i]>= 'a' && str[i] <= 'z'){
            mySet.insert(str[i]);
        }
    }
    if(mySet.size()==26){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}
