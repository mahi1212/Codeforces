#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b , c;
    cin >> a >> b >> c;
    int a1, a2, a3, a4, a5;

    a1 = a+b*c;
    a2 = a*(b+c);
    a3 = a*b*c;
    a4 = (a+b)*c;
    a5 = a+b+c;

    cout << max(max(max(max(a1,a2),a3),a4),a5);

    return 0;
}
