#include<bits/stdc++.h>
using namespace std;

#define ll  long long
#define pb  push_back
#define yes cout <<"YES" <<endl
#define no cout << "NO" <<endl
#define oky_bye return 0

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;

        int l = 0;
        int h = n-1;
        int c = 0;
        if(n==2){
            if(s[0] == s[1]){
                c = 2;
            }else{
                c = 0;
            }
        }
        if(n>2)
        {
            for(int i=0; i<n; i++){
                if(s[i]==s[0]){
                    c++;
                }

            }
            c-=1;
            while(h > l){

                if(s[l++] == s[h--])
                {
                    c++;
                }
            }
        }

        cout << c << endl;

    }

    oky_bye;
}
