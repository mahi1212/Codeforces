#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int a = 0, b = 0;
        bool no = false;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'A') a++;
            if(s[i] == 'B') b++;
            if(b>a) {
                no = true;
                break;
            }
        }
        if( b < 1 || s[s.size()-1] == 'A') no = true;

        if(no){
            cout<<"NO" << endl;
        }else{
            cout<<"YES"<< endl;
        }

    }
}

