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

int main()
{
    Bismillah();

    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int div = 0;
        for(int i=2; i<=n; i++)
        {
            if(n%i == 0)
            {
                div = i;
                break;
            }
        }
        k--;
        n += div;
        n += 2*k;
        cout << n << endl;
    }

    oky_bye;
}


