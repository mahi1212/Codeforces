#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int input;
    vector<int> v ={1,0,0,1,2};

    //cin >> input;
    //v.push_back(input);

    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v.size()-1; j++){
            if(v[j]>v[j+1]){
                swap(v[j], v[j+1]);
            }
        }
    }

    for(int i =0; i< v.size(); i++){
        cout << v[i] << ",";
    }

    return 0;
}