#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define pb              push_back
#define yes             cout <<"YES" <<endl
#define no              cout << "NO" <<endl
#define newline         cout <<endl
#define sa(a,n)         sort(a,a+n)
#define sv(v)           sort(v.begin(),v.end())
#define sumVec(v)       accumulate(v.begin(), v.end(), 0)
#define Bismillah()     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define oky_bye         return 0

int main(){
    Bismillah();

    int t;
    cin >> t;
    while(t--){
        int n, s;
        cin >> n >> s;
        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int one = count(a.begin(), a.end(), 1);
        if(one < s){
            cout << -1 << endl;
            continue;
        }else if(one == s){
            cout << 0 << endl;
            continue;
        }else{
            int cnt = 0;
            int ans = 0;
            int k;
            for(int i=0;i<n;i++)
            {
                ans+=a[i];
                cnt++;
                if(ans==s)
                {
                    k=i+1;
                    break;
                }
            }
            int mx = cnt;
            int ind = 0;
            for(int i=k;i<n;i++)
            {
                int j=i;
                while(j<n)
                {
                    if(a[j]==1)
                    {
                        break;
                    }
                    cnt++;
                    mx=max(mx,cnt);
                    j++;
                }
                i = j;
                ans++;
                while(ind<n)
                {
                    if(a[ind]==1)
                    {
                        ind++;
                        break;
                    }
                    cnt--;
                    ind++;
                    mx=max(mx,cnt);
                }
            }
            cout<<n - mx<<endl;
        }
    }

    oky_bye;
}
