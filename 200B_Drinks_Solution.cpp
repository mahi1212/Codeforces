#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    double arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    double count = 0;
    for(int i=0; i<n; i++){
        count += arr[i];
    }
    cout << fixed << setprecision(12);
    cout << count/n;
    return 0;
}
