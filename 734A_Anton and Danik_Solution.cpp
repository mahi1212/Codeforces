#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a =0, d=0;
    char game[n];
    for(int i=0; i<n; i++){
        cin >> game[i];
    }

    for(int i=0; i<n; i++){
        if(game[i]=='A'){
            a++;
        }else{
            d++;
        }
    }

    if(a==d){
        cout << "Friendship" << endl;
    }else if(a>d){
        cout << "Anton" << endl;
    }else{
        cout << "Danik" << endl;
    }

    return 0;
}
