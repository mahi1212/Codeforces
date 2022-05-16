#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, div;
    cin >> n;

    div = n/100;
    n = n%100;
    div += n/20;
    n = n%20;
    div += n/10;
    n = n%10;
    div += n/5;
    n = n%5;
    div += n/1;
    n = n%1;

    cout << div << endl;
    return 0;
}
