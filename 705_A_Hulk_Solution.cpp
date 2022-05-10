#include<bits/stdc++.h>
using namespace std;

int main(){
    int  n;
    cin >> n;
    string first = "I hate", second = "I love";
    string str[] = {"I hate", "I love"};
    string s;
    if(n%2==0){
        for(int i=1; i<=n/2; i++){
            s += str[0]+ " that " + str[1];
            if(i!= n/2){
                s += " that ";
            }
        }
    }else{
        for(int i=0; i<(n/2)+1; i++){
            s += str[0] ;
            if(i!=n/2){
                s+= " that " + str[1] + " that ";
            }

        }
    }

    cout << s + " it";
    return 0;
}
