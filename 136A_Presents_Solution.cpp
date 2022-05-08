#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[100], n, b;
    cin >> n;
    for(int i =1; i<=n; i++){
        cin >> b;
        arr[b] = i;
    }

    for(int i = 1; i<= n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
