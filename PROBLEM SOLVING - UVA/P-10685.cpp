#include<bits/stdc++.h>
using namespace std;

const int maxi=5010;

int parent[maxi];
int ara[maxi];

void make_set(int n)
{
    for(int i=0; i<=n; i++)
        parent[i]=i;
}

void cost_set(int n)
{
    for(int i=0; i<n; i++)
        ara[i]=1;
}

int find_set(int val)
{
    if(parent[val]==val)
        return val;
    else
    {
        parent[val]=find_set(parent[val]);
        return parent[val];
    }
}

void set_union(int a,int b)
{
    int u=find_set(a);
    int v=find_set(b);

    if(u!=v)
    {
        parent[v]=u;
        ara[u]=ara[u]+ara[v];
    }
}

int main()
{
    int n,e;

    while(cin>>n>>e)
    {
        map<string,int>mp;
        string s1,s2,s3;

        if(!n && !e) break;

        make_set(n);
        cost_set(n);

        for(int i=0; i<n; i++)
        {
            cin>>s1;
            mp[s1]=i;
        }

        for(int i=0; i<e; i++)
        {
            cin>>s2>>s3;
            int u=mp[s2];
            int v=mp[s3];

            set_union(u,v);
        }

        sort(ara,ara+n);

        cout<<ara[n-1]<<endl;
    }

    return 0;
}

