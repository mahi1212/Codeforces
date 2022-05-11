#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i;
    set<int> s;
    int p, q;
    cin >>  p;
    for(i=0; i<p; i++){
        int x;
        cin >> x;
        s.insert(x);
    }
    cin >> q;
    for(i=0; i<q; i++){
        int y;
        cin >> y;
        s.insert(y);
    }
    /* how to make output of a set
    for(auto it = s.begin(); it!= s.end(); ++it){
        cout << *it ; //pointer is must
    }
    */

    if(s.size()==n){
        cout << "I become the guy." << endl;
    }else{
        cout << "Oh, my keyboard!" << endl;
    }



    return 0;
}
