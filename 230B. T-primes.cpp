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

    long long int a[1000000]={0};
    for(int i=2; i<=1000000; i++)
    {
        if(a[i]==0)
        {
            for(int j=2; i*j<=100000; j++)
            {
                a[i*j]=1;
            }
        }
    }

    int n;
    cin >> n;
    long long int x;
    long long int sq;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        sq = sqrt(x);
        if(x==1) no;
        else if((sq*sq==x) && (a[sq]==0))
        {
            yes;
        }
        else
        {
            no;
        }
    }

    oky_bye;
}

