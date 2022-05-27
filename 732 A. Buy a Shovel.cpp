#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define pb              push_back
#define yes             cout <<"YES" <<endl
#define no              cout << "NO" <<endl
#define newline         cout <<endl
#define sa(a,n)         sort(a,a+n)
#define sv(v)           sort(v.begin(),v.end())
#define Bismillah()     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define oky_bye         return 0

int main(){
    Bismillah();
    //code here
    int k, r;
    cin >> k >> r;
    int count = 1, value = k, i=2;
    while(true){
        if(value%10 == 0){
            cout << count << endl;
            break;
        }if(value%10 == r){
            cout << count << endl;
            break;
        }
        value = k*i;
        count++;
        i++;
        cout << value << " " << count << endl;
    }

    oky_bye;
}

