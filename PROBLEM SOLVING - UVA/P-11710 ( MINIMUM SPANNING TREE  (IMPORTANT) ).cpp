/// KRUSKAL

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int sz = 400 + 10;

map<string, int>mp;
int parent[sz];

struct nodes
{
    string a,b;
    int cost;
} n;

bool cmp(nodes n1, nodes n2)
{
    return n1.cost < n2.cost;
}

void make_set(int node)
{
    for(int i=0; i<=node; i++)
    {
        parent[i] = i;
    }
}

int find_set(int val)
{
    while(val != parent[val])
        val = parent[val];

    return val;
}

void _set_union(int uu, int vv)
{
    parent[uu] = vv;
}

int main()
{
    int node,edge;

    while(cin>>node>>edge && node)
    {
        make_set(node);

        for(int i=1; i<=node; i++)
        {
            string node_name;
            cin>>node_name;

            mp[node_name] = i;
        }

        vector<nodes>v,ans;

        while(edge--)
        {
            cin>>n.a>>n.b>>n.cost;
            v.push_back(n);
        }

        sort(v.begin(), v.end(), cmp);

        for(int i=0; i<v.size(); i++)
        {
            int uu = find_set(mp[v[i].a]);
            int vv = find_set(mp[v[i].b]);

            if(uu != vv)
            {
                _set_union(uu, vv);
                ans.push_back(v[i]);
            }
        }

        string st;
        cin>>st;

        if(ans.size() == node-1) /// spanning tree can be made if size is equal to node-1
        {
            ll sum = 0;

            for(int i=0; i<ans.size(); i++)
                sum += ans[i].cost;

            cout<<sum<<endl;
        }

        else
            cout<<"Impossible"<<endl;
    }

    return 0;
}

