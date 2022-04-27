#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, num = 0;
    cin >> n;
    int dig = 2;

    for(int i = 1; i<=n; ++i){
        num = num + pow(dig, i);
    }

    cout << num << endl;

    return 0;
}

