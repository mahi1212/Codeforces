#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define pb              push_back
#define yes             cout <<"YES" <<endl
#define no              cout << "NO" <<endl
#define newline         cout <<endl
#define sa(a,n)         sort(a,a+n)
#define sv(v)           sort(v.begin(),v.end())
#define oky_bye         return 0

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //bismillah
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        if(a/b==1){
            cout << 0 << endl;
        }else{
            if(abs(a-b)%10==0)
                cout<<abs(a-b)/10<<endl;
            else
                cout<<(abs(a-b)/10)+1<<endl;
        }

    }

    oky_bye;
}

