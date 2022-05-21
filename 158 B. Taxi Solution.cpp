#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,one = 0,two = 0,three = 0,four = 0,a,ans = 0;
    cin >> n;
    while(n--){
        cin >> a;
        if(a == 1)one++;
        else if(a == 2)two++;
        else if(a == 3)three++;
        else four++;
    }
    ans = four;

    while(three>0 && one>0){
        three--;
        one--;
        ans++;
    }

    while(two>0 && one >= 2){
        two--;
        one-=2;
        ans++;
    }
    while(two> 0 && one>0){
        two--;
        one--;
        ans++;
    }
    while(two > 0){
        two-=2;
        ans++;
    }
    while(one > 0){
        one-=4;
        ans++;
    }
    if(one < 0)one = 0;
    if(two < 0)two = 0;
    if(three < 0)three = 0;
    ans+=one+two+three;
    cout << ans << endl;
    return 0;
}
