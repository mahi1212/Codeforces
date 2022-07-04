#include<bits/stdc++.h>
using namespace std;

#define ll                  long long
#define pb                  push_back
#define yes                 cout <<"YES" <<endl
#define no                  cout << "NO" <<endl
#define newline             cout <<endl
#define sa(a,n)             sort(a,a+n)
#define Bismillah()         ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define oky_bye             return 0

int n,arr[100005];
vector <int> pref(100005);

int binarySearch (int k){
    int i,low=1,high=n;

    while (low < high)
    {
        int mid = (low+high)/2;

        if (k <= pref[mid])
            high = mid;
        else
            low = mid+1;
    }
    return high;
}

int main(){
    Bismillah();

    while(cin >> n){
        for (int i=1; i<=n; i++){
            cin >> arr[i];
            pref[i] = pref[i-1] + arr[i];
        }

        int m;
        cin >> m;
        for (int i=1; i<=m; i++)
        {
            int k;
            cin >> k;
            cout << binarySearch(k) << endl;
        }
    }

    oky_bye;
}
