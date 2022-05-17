#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, m, a, h, w; // h = height w = width
    cin >> n >> m >> a;
    h = n/a;
    w = m/a;
    if(n%a != 0){
        h++;
    }
    if(m%a != 0){
        w++;
    }

    cout << h*w << endl;

    return 0;
}
