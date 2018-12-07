#include<bits/stdc++.h>
using namespace std;

const int INF=1e9,MAX=50010;
int dis[MAX];

void init(int n)
{
    for(int i=0; i<=n; i++)
        dis[i]=INF;
}

int main()
{
    int node,edge,s,t;
    int test,cs=0;

    cin>>test;

    while(test--)
    {
        vector<pair<int,int> >edges[MAX];
        cin>>node>>edge>>s>>t;

        init(node);

        while(edge--)
        {
            int x,y,z;
            cin>>x>>y>>z;
            edges[x].push_back(make_pair(y,z));
            edges[y].push_back(make_pair(x,z));
        }

        priority_queue<pair<int,int> >pq;

        int maxi=max(s,t);
        int mini=min(s,t);

        dis[mini]=0;

        pq.push(make_pair(0,mini));

        while(!pq.empty())
        {
            int u=pq.top().second;
            pq.pop();

            int si=edges[u].size();

            for(int i=0; i<si; i++)
            {
                int v=edges[u][i].first;
                int cost=edges[u][i].second;

                if(dis[v]>dis[u]+cost)
                {
                    dis[v]=dis[u]+cost;
                    pq.push(make_pair(-dis[v],v));
                }
            }
        }

        cout<<"Case #"<<++cs<<": ";

        if(dis[maxi]==INF) cout<<"unreachable";
        else cout<<dis[maxi];

        cout<<endl;
    }

    return 0;
}

