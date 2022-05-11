#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int max = 0, min = 101, max_index, min_index;

    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i]>max){
            max = arr[i];
            max_index = i;
        }
        if(arr[i]<= min){
            min = arr[i];
            min_index = i;
        }
    }
    if(max_index > min_index){
        min_index++;
    }
    cout << max_index + (n-1) - min_index;

    return 0;
}
