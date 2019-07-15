#include<bits/stdc++.h>
using namespace std;

const int sz = 100 + 5;
typedef pair<int,int> pii;

map<int,int>mp;
vector<int>edges[sz];
int visit[sz];

struct nodes
{
    int unit;
    int ind;

    nodes(int _unit, int _ind)
    {
        unit = _unit;
        ind = _ind;
    }
};

vector<nodes>vec;

bool cmp(nodes a, nodes b)
{
    if(a.unit == b.unit)
        return a.ind < b.ind;
    return a.unit > b.unit;
}

void init(int node)
{
    for(int i=0; i<node; i++)
        edges[i].clear();

    mp.clear();
    memset(visit,0,sizeof(visit));
    vec.clear();
}

pii bfs(int u)
{
    int sum,last;
    sum = last = 0;

    while(true)
    {
        vec.clear();
        int sz = edges[u].size();
        last = u;
        sum += mp[u];

        if(sz == 0)
            break;

        for(int i=0; i<sz; i++)
        {
            int v = edges[u][i];
            vec.push_back(nodes(mp[v],v));
        }

        sort(vec.begin(),vec.end(),cmp);

        u = vec[0].ind;
    }

    return {sum,last};
}

int main()
{
    int test,cs=0;
    cin>>test;
    cin.ignore();

    while(test--)
    {
        int node,edge;
        cin>>node>>edge;

        init(node);

        for(int i=0; i<node; i++)
        {
            int unit;
            cin>>unit;
            mp[i] = unit;
        }

        for(int i=0; i<edge; i++)
        {
            int u,v;
            cin>>u>>v;
            edges[u].push_back(v);
        }

        pii p = bfs(0);
        cout<<"Case "<<++cs<<": "<<p.first<<" "<<p.second<<endl;
        cin.ignore();
    }

    return 0;
}
