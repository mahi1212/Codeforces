#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;
        if(l1 <=r2 && l2<=r1){
            long long ans = max(l1, l2);
            cout << ans << endl;
        }
        else cout << l1+l2 << endl;
    }

    return 0;
}
