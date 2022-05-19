#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m, l, r;
        cin >> n >> m;
        string a[n];
        for(int i=0; i<n; i++) cin >> a[i];

        bool robot = false;
        bool no = false;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(!robot && a[i][j]=='R'){
                    l = i;
                    r = j;
                    robot = true;
                }
                if(robot && a[i][j]=='R'){
                    if(j < r){
                        no = true;
                        break;
                    }
                }
            }
        }

        if(no) cout << "NO";
        else cout << "YES";

        cout << endl;

    }

    return 0;
}
