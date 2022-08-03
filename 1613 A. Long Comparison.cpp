#include<bits/stdc++.h>
using namespace std;

#define ll                  long long
#define pb                  push_back
#define yes                 cout <<"YES" <<endl
#define no                  cout << "NO" <<endl
#define newline             cout <<endl
#define sa(a,n)             sort(a,a+n)
#define sv(v)               sort(v.begin(),v.end())
#define sumVec(v)           accumulate(v.begin(), v.end(), 0)
#define fillVec(v,value)    fill(v.begin(), v.end(), value)
#define Bismillah()         ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define oky_bye             return 0

int main(){
    Bismillah();

    int t;
    cin >> t;
    while(t--){
        int x1, p1, x2, p2;
        cin >> x1 >> p1;
        cin >> x2 >> p2;
        if(p1==p2){
            if(x1==x2){
                cout << "=" << endl;
            }else if(x1 < x2){
                cout << "<" << endl;
            }else{
                cout << ">" << endl;
            }
        }else{
            while(x1 <= 100000){
                if(p1 == 0) break;
                else{
                    x1 *= 10;
                    p1--;
                }
            }
            while(x2 <= 100000){
                if(p2 == 0) break;
                else{
                    x2 *= 10;
                    p2--;
                }
            }
            if(p1 > p2){
                cout << ">" << endl;
            }else if(p1 < p2){
                cout << "<" << endl;
            }else{
                if(x1 == x2) cout << "=" << endl;
                else if(x1 > x2) cout << ">" << endl;
                else cout << "<" << endl;
            }
        }

    }

    oky_bye;
}
