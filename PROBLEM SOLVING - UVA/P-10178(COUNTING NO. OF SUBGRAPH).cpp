/// DISJOINT SET

#include<bits/stdc++.h>
using namespace std;

const int sz = 52;
map<char,int>mp;
int parent[sz+4];

void make_set(int node)
{
    for(int i=1; i<=node; i++)
        parent[i] = i;
}

int find_set(int u)
{
    while(u != parent[u])
        u = parent[u];

    return u;
}

void _set_union(int x,int y)
{
    parent[x] = y;
}

int main()
{
    int node,edge;
    while(cin>>node>>edge)
    {
        make_set(node);
        mp.clear();

        if(!node && !edge)
            cout<<0<<endl;
        else
        {
            int res = 1;
            int cnt = 0;

            while(edge--)
            {
                char a,b;
                cin>>a>>b;

                if(!mp[a]) mp[a] = ++cnt;
                if(!mp[b]) mp[b] = ++cnt;

                int u = find_set(mp[a]);
                int v = find_set(mp[b]);

                if(u == v) res++; /// counting the no. of cycle
                else _set_union(u,v);
            }

            cout<<res<<endl;
        }
    }

    return 0;
}

