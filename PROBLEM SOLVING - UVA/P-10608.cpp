#include<bits/stdc++.h>
using namespace std;

int parent[300010];
int ara[300010];

void make_set(int n)
{
    for(int i=0; i<=n; i++)
        parent[i]=i;
}

void cost_set(int n)
{
    for(int i=0; i<=n; i++)
        ara[i]=1;
}

int find_set(int r)
{
    if(parent[r]==r)
        return r;

    else
    {
        parent[r]=find_set(parent[r]);
        return parent[r];
    }
}

void set_union(int x,int y)
{
    int u=find_set(x);
    int v=find_set(y);

    if(u!=v)
    {
        parent[v]=u;
        ara[u]=ara[u]+ara[v];
    }
}

int main()
{
    int test;
    int n,e;

    cin>>test;

    while(test--)
    {
        cin>>n>>e;

        make_set(n);
        cost_set(n);

        while(e--)
        {
            int u,v;
            cin>>u>>v;

            set_union(u,v);
        }

        sort(ara,ara+n+1);

        cout<<ara[n]<<endl;
    }

    return 0;
}

