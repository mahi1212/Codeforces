#include<bits/stdc++.h>
using namespace std;

int main(){
    int s, p; // array size and position
    int arr[s];
    cin >> s >> p;
    for(int i = 0; i<s; i++){
        cin >> arr[i];
    }

    for(int i = 0; i<s; i++){
        //cout << arr[i] << " ";
        if(arr[i]>0){
            if(arr[p] >= arr[p+1]){
                cout << arr[p+1]+1 << endl;
                break;
            }
        }else{
            cout << 0 << endl;
            break;
        }
    }

    return 0;
}
