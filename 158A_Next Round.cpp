#include<bits/stdc++.h>
using namespace std;

int main(){
    int s, k; // array size and position
    cin >> s >> k;
    int arr[s];
    for(int i = 0; i<s; i++){
        cin >> arr[i];
    }
    int num =0;
    for(int i = 0; i<=s; i++){
        if( arr[i] >= arr[k-1] && arr[i]!=0){
            num += 1;
        }
    }
    cout << num;
    return 0;
}
