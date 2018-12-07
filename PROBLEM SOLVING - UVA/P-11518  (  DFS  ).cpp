#include<bits/stdc++.h>
using namespace std;

const int maxi=10010;
vector<int>v[maxi];
map<int,bool>visit;

void init(int n)
{
    for(int i=1; i<=n; i++) v[i].clear();
}

void dfs(int i)
{
    if(!visit[i]) visit[i]=true;

    int si=v[i].size();
    for(int j=0; j<si; j++)
    {
        int val=v[i][j];
        if(!visit[val]) dfs(val);
    }
}

int main()
{
    int test,node,edge,start;

    cin>>test;
    while(test--)
    {
        cin>>node>>edge>>start;
        visit.clear();
        init(node);

        while(edge--)
        {
            int x,y;
            cin>>x>>y;
            v[x].push_back(y);
        }

        for(int i=1; i<=start; i++)
        {
            int s;
            cin>>s;
            dfs(s);
        }

        int cnt=0;

        for(int i=1; i<=node; i++)
        {
            if(visit[i]) cnt++;
        }

        cout<<cnt<<endl;
    }

    return 0;
}

