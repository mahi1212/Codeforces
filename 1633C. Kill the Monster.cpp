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
        ll hc, dc, hm, dm, k, w, a;
        cin >> hc >> dc;
        cin >> hm >> dm;
        cin >> k >> w >> a;
        bool flag = false;
        for(int i=0; i<=k; i++){
            ll coinUsed = i;
            ll remCoin = k-i;
            ll newAttack = dc + coinUsed * w;
            ll newHealth=  hc + remCoin * a;
            ll monsterTurn, herosTurn;
            if(newHealth % dm == 0){
                monsterTurn = newHealth/dm;
            }else{ //if floating number found increase 1
                monsterTurn = newHealth/dm + 1;
            }
            if(hm % newAttack == 0){
                herosTurn = hm/ newAttack;
            }else{ //if floating number found increase 1
                herosTurn = hm/ newAttack + 1;
            }

            if(herosTurn <= monsterTurn){
                flag = true;
                break;
            }
        }
        if(flag){
            yes;
        }else{
            no;
        }
    }

    oky_bye;
}
