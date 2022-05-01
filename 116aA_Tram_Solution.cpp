#include<bits/stdc++.h>
using namespace std;

int main(){
    int pass = 0, exit, enter;
    int t;
    vector<int> v;
    cin >> t;
    while(t--){
        cin >> exit >> enter;
        pass += enter-exit;
        v.push_back(pass);
    }
    cout << *max_element(v.begin(), v.end());

    return 0;
}
