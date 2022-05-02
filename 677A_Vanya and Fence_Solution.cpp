#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, h;
    cin >> n >> h;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    vector<int> v;
    for(int i=0; i<n; i++){
        if(a[i] > h){
            v.push_back(2);
        }else{
            v.push_back(1);
        }
    }
    int sum = 0;
    for(int i=0; i<v.size(); i++){
        sum += v[i];
    }

    cout << sum ;
    return 0;
}
