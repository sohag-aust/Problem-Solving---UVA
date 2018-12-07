#include<bits/stdc++.h>
using namespace std;

int cost[110][110];

void init(int n)
{
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        cost[i][j]=0;
}

void floyd_warshall(int n)
{
    for(int k=1;k<=n;k++)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                cost[i][j]=max(cost[i][j],min(cost[i][k],cost[k][j]));
            }
        }
    }
}

int main()
{
    int node,edge,cs=0;

    while(cin>>node>>edge)
    {
        if(!node && !edge) break;

        init(node);

        int u,v,w;

        while(edge--)
        {
            cin>>u>>v>>w;
            cost[u][v]=w;
            cost[v][u]=w;
        }

        floyd_warshall(node);

        int s,e,p;
        cin>>s>>e>>p;

        double res=(double)p/(double)(cost[s][e]-1);
        res=ceil(res);

        cout<<"Scenario #"<<++cs<<endl;
        cout<<"Minimum Number of Trips = "<<(int)res<<endl;
        cout<<endl;
    }

    return 0;
}

