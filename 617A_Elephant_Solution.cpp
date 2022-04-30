#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ,t = 0;
    cin >> n;
    if(n%5==0){
        n = n/5;
        cout << n ;
    }else{
        t = n / 5;
        t++;
        cout << t;
    }


    return 0;
}
