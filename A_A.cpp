#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,i;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int len=s.size();
        int c=0;
        for(i=0; i<len; i++){
            c += int(s[i]-'a');
            c++;
        }

        if(len%2==0){
            cout<<"Alice "<< c <<endl;
        }else{
            int v1 = c - int(s[0]-'a')-1;
            int v2 = c - int(s[len-1]-'a')-1;
            int v3 = max(v1, v2);
            int rem = c-v3;
            if(v3 > rem){
                cout << "Alice "<< v3-rem <<endl;
            }else{
                cout << "Bob " << rem-v3 << endl;
            }
        }
    }

    return 0;
}
