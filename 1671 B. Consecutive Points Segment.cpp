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

int main(){
    Bismillah();

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int k = n - 2; // number of middle digits
		int ans = a[n - 1] - a[0] - 3; //Compare the distance between the two sides and the number of middle digits
		//cout << "K : " << k << " Ans : " << ans << endl;
		if (ans <= k)
			yes;
		else
			no;
    }

    oky_bye;
}

