#include<bits/stdc++.h>
using namespace std;

#define sz 110

int grid[sz][sz];

void init()
{
    for(int i=0; i<sz; i++)
    {
        for(int j=0; j<sz; j++)
        {
            if(i==j)
                grid[i][j] = 0;
            else
                grid[i][j] = 1e9;
        }
    }
}

int floyd_warshall(int n,int e,int t)
{
    for(int k=0; k<n; k++)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(grid[i][k] + grid[k][j] < grid[i][j])
                {
                    grid[i][j] = grid[i][k] + grid[k][j];
                }
            }
        }
    }

    int ans = 0;
    for(int i=0; i<n; i++)
    {
        if(grid[i][e-1] <= t)
            ans++;
    }
    return ans;
}

int main()
{
    int test;
    int n,e,t,m;

    cin>>test;
    while(test--)
    {
        init();
        cin.ignore();
        cin>>n>>e>>t>>m;

        while(m--)
        {
            int a,b,c;
            cin>>a>>b>>c;

            grid[a-1][b-1] = c;
        }

        int result = floyd_warshall(n,e,t);

        cout<<result<<endl;
        if(test)
            cout<<endl;
    }

    return 0;
}

