#include<bits/stdc++.h>
using namespace std;


int main(){
    int k, n, w; // k=1st banana price ,n = he has dollers , w = how many want to buy
    cin >> k >> n >> w;
    int total = 0;
    for(int i=1; i<=w; i++){
        total += i*k;
    }
    if(n < total){
        cout << abs(n-total) << endl;
    }else{
        cout << 0 << endl;
    }


    return 0;
}
