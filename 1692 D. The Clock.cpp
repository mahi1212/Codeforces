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
        string s;
        cin >> s ;
        int x;
        cin >> x;
        int hour = (s[0]-'0')*10 + (s[1]-'0'); //for position(left), multiply by 10
        int minit = (s[3]-'0')*10 + (s[4]-'0');

        int initial_h = hour;
        int initial_m = minit;
        int count = 0;
        while(1){
            minit += x;
            hour += (minit/60);
            minit %= 60;
            hour %= 24;

            int left_hour, right_hour,left_min, right_min;
            right_hour = hour % 10;
            left_min = (minit /10)%10;
            left_hour =(hour /10)%10;
            right_min = minit %10;
            if(right_hour == left_min && left_hour == right_min){
                count++;
            }
            if(initial_m == minit && initial_h == hour){
                break;
            }
        }
        cout << count << endl;
    }

    oky_bye;
}
