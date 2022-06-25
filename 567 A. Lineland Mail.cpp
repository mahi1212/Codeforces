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

    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cout << arr[1] - arr[0] << " " << arr[n - 1] - arr[0] << endl;
        }
        else if (i == n - 1)
        {
            cout << arr[n - 1] - arr[n - 2] << " " << arr[n - 1] - arr[0] << endl;
        }
        else
        {
            cout << min(arr[i + 1] - arr[i], arr[i] - arr[i - 1]) << " " << max(arr[i] - arr[0], arr[n - 1] - arr[i]) << endl;
        }
    }

    oky_bye;
}


