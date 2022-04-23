#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, t, rem;
    cin >> n >> t;
    for(int i=1; i<=t; i++)
    {
        rem = n%10; //checking last degit weather zero or not
        if(rem == 0){
            n = n/10;
        }
        else{
            n = n-1;
        }

    }
    cout << n << endl;

    return 0;
}
