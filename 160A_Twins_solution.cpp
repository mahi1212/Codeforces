#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int total = 0, sum2 = 0, count = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        total += arr[i];
    }

    int half = total/2;
    sort(arr, arr+n);

    for(int i=n-1; i>=0; i--){
        sum2 += arr[i];
        count++;
        if(sum2 > half){
            break;
        }
    }
    cout << count << endl;
    return 0;
}
