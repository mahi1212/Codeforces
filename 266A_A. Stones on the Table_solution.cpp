#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,c = 0;
    cin >> n;
    char arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        if(arr[i]==arr[i+1]){
            c++;

        }
    }
    cout << c;
    return 0;
}
