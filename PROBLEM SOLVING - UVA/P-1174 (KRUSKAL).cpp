#include<bits/stdc++.h>
using namespace std;

int parent[2010];

void make_set(int n)
{
    for(int i=0; i<=n; i++)
        parent[i]=i;
}

struct nodes
{
    int from,to,cost;
} edges;

vector<nodes>v,ans;

bool cmp(nodes a,nodes b)
{
    return a.cost<b.cost;
}

int find_set(int val)
{
    while(val!=parent[val]) val=parent[val];
    return val;
}

int main()
{
    int test;
    cin>>test;
    cin.ignore();

    while(test--)
    {
        v.clear();
        ans.clear();
        int node,edge;
        cin>>node>>edge;

        make_set(node);
        cin.ignore();

        string s1,s2;
        int w,cnt;

        map<string,int>mp;

        cnt=0;

        while(edge--)
        {
            cin>>s1>>s2>>w;

            if(!mp[s1])
            {
                cnt++;
                mp[s1]=cnt;
            }

            if(!mp[s2])
            {
                cnt++;
                mp[s2]=cnt;
            }

            edges.from=mp[s1];
            edges.to=mp[s2];
            edges.cost=w;

            v.push_back(edges);
        }

        sort(v.begin(),v.end(),cmp);

        for(int i=0; i<v.size(); i++)
        {
            int uu=find_set(v[i].from);
            int vv=find_set(v[i].to);

            if(uu!=vv)
            {
                parent[uu]=vv;
                ans.push_back(v[i]);
            }
        }

        long long sum=0;

        for(int i=0; i<ans.size(); i++)
            sum+=ans[i].cost;

        cout<<sum<<endl;

        if(test) cout<<endl;
    }

    return 0;
}

