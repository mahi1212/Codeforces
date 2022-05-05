#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b ,c ,x, y;//a = dog food, b = cat food, c==all| x = num. of dogs, y = num. of cats
        cin >> a >> b >> c >> x >> y;
        bool no = false;
        int food = a + b + c;
        int animal = x + y;
        if(food < animal){
            no = true;
        }else if((b+c) >= y &&(a+c) >= x){
            no = false;
        }else{
            no = true;
        }
        if(no){cout << "NO" << endl;}else{cout << "YES" << endl;}

    }


    return 0;
}
