#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, x, y, z, s1=0, s2=0, s3=0;//s = sum
    cin >> t;
    while(t--){
        cin >> x >> y >> z;
        s1 += x;
        s2 += y;
        s3 += z;
    }
    if(s1 == 0 && s2 == 0 && s3 == 0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}
