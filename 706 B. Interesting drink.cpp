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

int make_ans(int low, int high, int key, int a[]){
    while(low < high){
        int mid = (low+high)/2;
        if(a[mid]<= key){
            low = mid+1;
        }else{
            high = mid;
        }
    }
    return low;

}

int main(){
    Bismillah();

    int n, q;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sa(a, n);
    cin >> q;
    while(q--){
        int k;
        cin >> k;
        cout << make_ans(0, n, k, a) << endl;
    }

    oky_bye;
}
