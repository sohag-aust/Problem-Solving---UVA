#include<bits/stdc++.h>
using namespace std;

const int maxi=50010;
int parent[maxi],node;

void make_set(int n)
{
    for(int i=1; i<=n; i++)
        parent[i]=i;
}

int find_set(int r)
{
    if(parent[r]==r) return r;
    else return parent[r]=find_set(parent[r]);
}

void set_union(int x,int y)
{
    if(x!=y)
    {
        parent[y]=x;
        node--;
    }
}

int main()
{
    int edge,cs=0;
    while(cin>>node>>edge)
    {
        if(!node && !edge) break;
        make_set(node);

        while(edge--)
        {
            int x,y;
            cin>>x>>y;

            int u=find_set(x);
            int v=find_set(y);

            set_union(u,v);
        }

        cout<<"Case "<<++cs<<": "<<node<<endl;
    }

    return 0;
}

