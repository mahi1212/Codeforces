#include<bits/stdc++.h>
using namespace std;

#define ll  long long
#define pb  push_back
#define yes cout <<"YES" <<endl
#define no cout << "NO" <<endl
#define oky_bye return 0

int _lis(int arr[], int n, int* max_ref)
{

    if (n == 1)
        return 1;

    int res, max_ending_here = 1;

    for (int i = 1; i < n; i++)
    {
        res = _lis(arr, i, max_ref);
        if (arr[i - 1] < arr[n - 1]
                && res + 1 > max_ending_here)
            max_ending_here = res + 1;
    }

    if (*max_ref < max_ending_here)
        *max_ref = max_ending_here;

    return max_ending_here;
}

int lis(int arr[], int n)
{
    int max = 1;
    _lis(arr, n, &max);
    return max;
}

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
        int arr[n];
        int arr2[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            arr2[i] = arr[i];
        }

        reverse(arr2, arr2 +n);
        int l1 = lis(arr, n);
        int l2 = lis(arr2, n);
        cout << min(l1, l2) << endl;
    }


    oky_bye;
}

