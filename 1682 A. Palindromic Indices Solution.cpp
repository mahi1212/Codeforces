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
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << s.length();

        int l = 0;
        int h = n-1;
        int c = 0;
        if(s.size()>=2)
        {
            do
            {
                if(s[l] == s[h])
                {
                    cout << s[l] << " " << s[h] << endl;
                    c++;
                }
                l++;
                h--;
            }
            while(h > l);
        }else if(s.length()==2){
            cout << "Oono" << endl;
            cout << s[0] << " " << s[1] << endl;
            if(s[0] == s[1]){
                c += 2;
            }else{
                c = 0;
            }
        }
        cout << c << endl;

    }

    oky_bye;
}
