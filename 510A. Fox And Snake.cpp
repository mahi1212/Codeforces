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

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //bismillah
    int r, c;
    cin >> r >> c;
    for(int i=1; i<=r; i++)
    {
        for(int j=0; j<c; j++){
            if(i%4== 2){
                if(j == c-1){
                    cout << "#";
                }
                else{
                    cout << ".";
                }
            }else if(i%4 == 0){
                if(j==0){
                    cout << "#";
                }else{
                    cout << ".";
                }
            }
            else{
                cout << "#";
            }
        }
        newline;
    }

    oky_bye;
}

