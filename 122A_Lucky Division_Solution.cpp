#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    bool flag = false;
    cin >> n;
    int arr[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 774, 777};
    for(int i=0; i<12; i++){
        if(n%arr[i]==0){
            flag = true;
            break;
        }
    }
    if(flag){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}
