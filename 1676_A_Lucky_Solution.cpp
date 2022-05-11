#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    string s;
    while(t--){
        cin >> s;
        int n = stoi(s);
        vector<int> num;
        for(int i=0; i<6; i++){
            int digit = n%10;
            n /= 10;
            num.push_back(digit);
        }

        int f = 0, s = 0;
        for(int i=0; i<3; i++){
            f+=num[i];
        }

        for(int i=3; i<6; i++){
            s+=num[i];
        }

        if(f==s){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
