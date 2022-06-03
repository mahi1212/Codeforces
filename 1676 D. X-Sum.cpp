#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define pb              push_back
#define yes             cout <<"YES" <<endl
#define no              cout << "NO" <<endl
#define newline         cout <<endl
#define sa(a,n)         sort(a,a+n)
#define sv(v)           sort(v.begin(),v.end())
#define Bismillah()     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define oky_bye         return 0

int main()
{
    Bismillah();

    int t;
    cin >> t;
    while(t--)
    {
        int r, c;
        cin >> r >> c;

        int grid [r][c];
        ll maxAns = 0;
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                cin >> grid[i][j];
            }
        }

        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                ll temp_sum=0;
                temp_sum+=grid[i][j];
                ll temp_i=i-1,temp_j=j-1;
                while(temp_i>=0 && temp_j>=0)
                {
                    temp_sum+=grid[temp_i][temp_j];
                    temp_i--;
                    temp_j--;
                }
                temp_i=i-1;
                temp_j=j+1;
                while(temp_i>=0 && temp_j<c)
                {
                    temp_sum+=grid[temp_i][temp_j];
                    temp_i--;
                    temp_j++;
                }
                temp_i=i+1;
                temp_j=j-1;
                while(temp_i<r && temp_j>=0)
                {
                    temp_sum+=grid[temp_i][temp_j];
                    temp_i++;
                    temp_j--;
                }
                temp_i=i+1;
                temp_j=j+1;
                while(temp_i<r && temp_j<c)
                {
                    temp_sum+=grid[temp_i][temp_j];
                    temp_i++;
                    temp_j++;
                }
                maxAns = max(maxAns,temp_sum);
            }
        }
        cout << maxAns << endl;
    }

    oky_bye;
}

