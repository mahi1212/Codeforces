#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]<arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int sum = 0;
    vector<int> ans;
    int tr = arr[0];
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
        if(arr[i]!=tr)
        {
            sum += arr[i];
        }
        tr = arr[0]++;
    }
    cout << sum ;



    return 0;
}
